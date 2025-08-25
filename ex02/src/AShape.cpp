#include "AShape.hpp"

AShape::AShape(const AShape& src) {(void)src;}

AShape&	AShape::operator = (const AShape& src) {(void)src; return (*this);}

AShape::AShape(void) {}
AShape::~AShape(void) {}