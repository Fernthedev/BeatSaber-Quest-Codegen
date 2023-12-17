#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointSet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstrainedPointSet)
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class ConstrainedPointSet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet);
// Type: UnityEngine.ProBuilder.Poly2Tri::ConstrainedPointSet
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15338))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15337))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::ConstrainedPointSet*
class CORDL_TYPE ConstrainedPointSet : public ::UnityEngine::ProBuilder::Poly2Tri::PointSet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::ProBuilder::Poly2Tri::PointSet)]{};

/// @brief Field <EdgeIndex>k__BackingField offset 0x20
 __declspec(property(get=__get__EdgeIndex_k__BackingField, put=__set__EdgeIndex_k__BackingField)) ::ArrayW<int32_t,::Array<int32_t>*>  _EdgeIndex_k__BackingField;

 __declspec(property(get=get_EdgeIndex, put=set_EdgeIndex)) ::ArrayW<int32_t,::Array<int32_t>*>  EdgeIndex;

 __declspec(property(get=get_TriangulationMode)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode  TriangulationMode;

constexpr void __set__EdgeIndex_k__BackingField(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__EdgeIndex_k__BackingField() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__EdgeIndex_k__BackingField() const;

/// @brief Method get_EdgeIndex addr 0x2b34d98 size 0x8 virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> get_EdgeIndex() ;

/// @brief Method set_EdgeIndex addr 0x2b34da0 size 0x8 virtual false final false
inline void set_EdgeIndex(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline ::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet* New_ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*  points, ::ArrayW<int32_t,::Array<int32_t>*>  index) ;

/// @brief Method .ctor addr 0x2b34da8 size 0x24 virtual false final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*  points, ::ArrayW<int32_t,::Array<int32_t>*>  index) ;

/// @brief Method get_TriangulationMode addr 0x2b34e5c size 0x8 virtual true final false
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode() ;

/// @brief Method Prepare addr 0x2b34e64 size 0x1a4 virtual true final false
inline void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*  tcx) ;

// Ctor Parameters [CppParam { name: "", ty: "ConstrainedPointSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstrainedPointSet(ConstrainedPointSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstrainedPointSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstrainedPointSet(ConstrainedPointSet const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConstrainedPointSet()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet*, "UnityEngine.ProBuilder.Poly2Tri", "ConstrainedPointSet");
