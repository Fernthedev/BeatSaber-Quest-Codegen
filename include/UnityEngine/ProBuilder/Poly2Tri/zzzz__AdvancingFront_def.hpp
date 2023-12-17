#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AdvancingFront)
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFront;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront);
// Type: UnityEngine.ProBuilder.Poly2Tri::AdvancingFront
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15324))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::AdvancingFront*
class CORDL_TYPE AdvancingFront : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field Head offset 0x10
 __declspec(property(get=__get_Head, put=__set_Head)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  Head;

/// @brief Field Tail offset 0x18
 __declspec(property(get=__get_Tail, put=__set_Tail)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  Tail;

/// @brief Field Search offset 0x20
 __declspec(property(get=__get_Search, put=__set_Search)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  Search;

constexpr void __set_Head(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* __get_Head() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> __get_Head() const;

constexpr void __set_Tail(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* __get_Tail() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> __get_Tail() const;

constexpr void __set_Search(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* __get_Search() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> __get_Search() const;

static inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  head, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  tail) ;

/// @brief Method .ctor addr 0x2b30a64 size 0x30 virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  head, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  tail) ;

/// @brief Method AddNode addr 0x2b30a94 size 0x4 virtual false final false
inline void AddNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method RemoveNode addr 0x2b30a98 size 0x4 virtual false final false
inline void RemoveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  node) ;

/// @brief Method ToString addr 0x2b30a9c size 0xe8 virtual true final false
inline ::StringW ToString() ;

/// @brief Method FindSearchNode addr 0x2b30b84 size 0x8 virtual false final false
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* FindSearchNode(double_t  x) ;

/// @brief Method LocateNode addr 0x2b30b8c size 0x18 virtual false final false
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point) ;

/// @brief Method LocateNode addr 0x2b30ba4 size 0x5c virtual false final false
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(double_t  x) ;

/// @brief Method LocatePoint addr 0x2b30c00 size 0xf4 virtual false final false
inline ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocatePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*  point) ;

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFront", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdvancingFront(AdvancingFront && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFront", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdvancingFront(AdvancingFront const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AdvancingFront()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*, "UnityEngine.ProBuilder.Poly2Tri", "AdvancingFront");
