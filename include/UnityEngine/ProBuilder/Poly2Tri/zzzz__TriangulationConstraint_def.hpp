#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TriangulationConstraint)
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationConstraint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint);
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationConstraint
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15340))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::TriangulationConstraint*
class CORDL_TYPE TriangulationConstraint : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field P offset 0x10
 __declspec(property(get=__get_P, put=__set_P)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  P;

/// @brief Field Q offset 0x18
 __declspec(property(get=__get_Q, put=__set_Q)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  Q;

constexpr void __set_P(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* __get_P() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> __get_P() const;

constexpr void __set_Q(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* __get_Q() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> __get_Q() const;

static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* New_ctor() ;

/// @brief Method .ctor addr 0x2b3438c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TriangulationConstraint(TriangulationConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TriangulationConstraint(TriangulationConstraint const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TriangulationConstraint()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationConstraint");
