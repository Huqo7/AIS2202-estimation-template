#include <rapidcsv.h>
#include <Eigen/Dense>

Eigen::MatrixXd pseudo_inverse(const Eigen::MatrixXd &A)
{
    return A.completeOrthogonalDecomposition().pseudoInverse();
}

int main()
{
    rapidcsv::Document doc("data/1-baseline_accel.csv");

    std::vector<long> col = doc.GetColumn<long>("t");
    std::cout << "Read " << col.size() << " values." << std::endl;

    return 0;
}
