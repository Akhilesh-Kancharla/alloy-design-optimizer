#include<stdio.h>
#include<math.h>
#include<string.h>

int cubroot(double a, double b, double c, double d, double res[3]);
int diag(double mat[3][3], double res[3]);

int main() {
    
    char properties[7][25] = {"Thermal Conductivity","Electrical Conductivity", "Density", "Strength","Ductility","Corrosion Resistance","Hardness"};

    printf("Select any three properties you want to deal with for your Alloy\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\t%s\n", i + 1, properties[i]);
    }

    int p1, p2, p3;
    scanf("%d%d%d", &p1, &p2, &p3);
    p1--;
    p2--;
    p3--;

    printf("---------------------------------------------------------------------\n");

    char metals[7][20] = {"Iron", "Copper", "Aluminium","Titanium","Nickel","Lead","Zinc"};

    printf("Select any three metals you want to create your Alloy\n");
    for (int i = 0; i < 7; i++) {
        printf("%d\t%s\n", i + 1, metals[i]);
    }

    int m1, m2, m3;
    scanf("%d%d%d", &m1, &m2, &m3);
    m1--;
    m2--;
    m3--;

    printf("---------------------------------------------------------------------\n");

    char new_metals[3][20];
    
    strcpy(new_metals[0], metals[m1]);
    strcpy(new_metals[1], metals[m2]);
    strcpy(new_metals[2], metals[m3]);


    char new_properties[3][25];

    strcpy(new_properties[0], properties[m1]);
    strcpy(new_properties[1], properties[m2]);
    strcpy(new_properties[2], properties[m3]);


    double mat[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("What is the contribution of metal %s for property %s\n", new_metals[i], new_properties[j]);
            scanf("%lf", &mat[i][j]);
        }
    }

    printf("---------------------------------------------------------------------\n");

    
    double res[3];
    int flag;
    flag = diag(mat, res);


    if (flag == 1) {
        printf("The alloy composition is\n");
        for (int i = 0; i < 3; i++) {
            printf("%.5f of %s metal\n", res[i], new_metals[i]);
        }
    } 

    else {
        printf("Alloy design is incompatible\nPlease enter proper contributions\n");
    }

    return 0;
}


int diag(double mat[3][3], double res[3]) {
    int flag;

    double a = -1;
    double b = mat[0][0] + mat[1][1] + mat[2][2]; 
    double c = -mat[0][0] * (mat[1][1] + mat[2][2]) + mat[0][1] * mat[1][0] + mat[0][2] * mat[2][0];
    double d = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);

    flag = cubroot(a, b, c, d, res);
    return flag;
}


int cubroot(double a, double b, double c, double d, double res[3]) {
    if (a == 0) {
        printf("Not a cubic equation\n");
        return 0;
    }

    double p = (3 * a * c - b * b) / (3 * a * a);
    double q = (2 * b * b * b - 9 * a * b * c + 27 * a * a * d) / (27 * a * a * a);

    double D = (q * q / 4) + (p * p * p / 27);
    if (D >= 0) {
        double A = cbrt(-q / 2 + sqrt(D));
        double B = cbrt(-q / 2 - sqrt(D));

        double t0 = A + B;
        double t1 = A * cos(2 * M_PI / 3) + B * cos(4 * M_PI / 3);
        double t2 = A * cos(4 * M_PI / 3) + B * cos(2 * M_PI / 3);

        res[0] = t0 - b / (3 * a);
        res[1] = t1 - b / (3 * a);
        res[2] = t2 - b / (3 * a);

        return 1; 
    }

    return 0;
}