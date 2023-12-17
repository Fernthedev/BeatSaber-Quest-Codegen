#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DTSweepEdgeEvent)
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepEdgeEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent);
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepEdgeEvent
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15332))
// CS Name: ::UnityEngine.ProBuilder.Poly2Tri::DTSweepEdgeEvent*
class CORDL_TYPE DTSweepEdgeEvent : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field ConstrainedEdge offset 0x10
 __declspec(property(get=__get_ConstrainedEdge, put=__set_ConstrainedEdge)) ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  ConstrainedEdge;

/// @brief Field Right offset 0x18
 __declspec(property(get=__get_Right, put=__set_Right)) bool  Right;

constexpr void __set_ConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*  value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* __get_ConstrainedEdge() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*> __get_ConstrainedEdge() const;

constexpr void __set_Right(bool  value) ;

constexpr bool& __get_Right() ;

constexpr bool const& __get_Right() const;

static inline ::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2b344a4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepEdgeEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DTSweepEdgeEvent(DTSweepEdgeEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepEdgeEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DTSweepEdgeEvent(DTSweepEdgeEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DTSweepEdgeEvent()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepEdgeEvent");
