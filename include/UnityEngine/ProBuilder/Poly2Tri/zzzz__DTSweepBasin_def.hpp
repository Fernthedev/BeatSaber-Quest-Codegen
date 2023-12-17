#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DTSweepBasin)
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepBasin;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin);
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepBasin
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15328))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DTSweepBasin*
class CORDL_TYPE DTSweepBasin : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field leftNode offset 0x10
 __declspec(property(get=__get_leftNode, put=__set_leftNode)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  leftNode;

/// @brief Field bottomNode offset 0x18
 __declspec(property(get=__get_bottomNode, put=__set_bottomNode)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  bottomNode;

/// @brief Field rightNode offset 0x20
 __declspec(property(get=__get_rightNode, put=__set_rightNode)) ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  rightNode;

/// @brief Field width offset 0x28
 __declspec(property(get=__get_width, put=__set_width)) double_t  width;

/// @brief Field leftHighest offset 0x30
 __declspec(property(get=__get_leftHighest, put=__set_leftHighest)) bool  leftHighest;

constexpr void __set_leftNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* __get_leftNode() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> __get_leftNode() const;

constexpr void __set_bottomNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* __get_bottomNode() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> __get_bottomNode() const;

constexpr void __set_rightNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* __get_rightNode() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*> __get_rightNode() const;

constexpr void __set_width(double_t  value) ;

constexpr double_t& __get_width() ;

constexpr double_t const& __get_width() const;

constexpr void __set_leftHighest(bool  value) ;

constexpr bool& __get_leftHighest() ;

constexpr bool const& __get_leftHighest() const;

static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* New_ctor() ;

/// @brief Method .ctor addr 0x2b34384 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepBasin", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DTSweepBasin(DTSweepBasin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepBasin", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DTSweepBasin(DTSweepBasin const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DTSweepBasin()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepBasin");
