#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeometryChangedEvent)
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::GeometryChangedEvent);
// Type: UnityEngine.UIElements::GeometryChangedEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7180)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1722 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7212))
// CS Name: ::UnityEngine.UIElements::GeometryChangedEvent*
class CORDL_TYPE GeometryChangedEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::GeometryChangedEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::GeometryChangedEvent*>)]{};

/// @brief Field <oldRect>k__BackingField offset 0x7c
 __declspec(property(get=__get__oldRect_k__BackingField, put=__set__oldRect_k__BackingField)) ::UnityEngine::Rect  _oldRect_k__BackingField;

/// @brief Field <newRect>k__BackingField offset 0x8c
 __declspec(property(get=__get__newRect_k__BackingField, put=__set__newRect_k__BackingField)) ::UnityEngine::Rect  _newRect_k__BackingField;

/// @brief Field <layoutPass>k__BackingField offset 0x9c
 __declspec(property(get=__get__layoutPass_k__BackingField, put=__set__layoutPass_k__BackingField)) int32_t  _layoutPass_k__BackingField;

 __declspec(property(get=get_oldRect, put=set_oldRect)) ::UnityEngine::Rect  oldRect;

 __declspec(property(get=get_newRect, put=set_newRect)) ::UnityEngine::Rect  newRect;

 __declspec(property(get=get_layoutPass, put=set_layoutPass)) int32_t  layoutPass;

constexpr void __set__oldRect_k__BackingField(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get__oldRect_k__BackingField() ;

constexpr ::UnityEngine::Rect const& __get__oldRect_k__BackingField() const;

constexpr void __set__newRect_k__BackingField(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get__newRect_k__BackingField() ;

constexpr ::UnityEngine::Rect const& __get__newRect_k__BackingField() const;

constexpr void __set__layoutPass_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__layoutPass_k__BackingField() ;

constexpr int32_t const& __get__layoutPass_k__BackingField() const;

/// @brief Method GetPooled addr 0x2e50c3c size 0xc0 virtual false final false
static inline ::UnityEngine::UIElements::GeometryChangedEvent* GetPooled(::UnityEngine::Rect  oldRect, ::UnityEngine::Rect  newRect) ;

/// @brief Method Init addr 0x2e50cfc size 0x50 virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x2e50d4c size 0x34 virtual false final false
inline void LocalInit() ;

/// @brief Method get_oldRect addr 0x2e50d80 size 0xc virtual false final false
inline ::UnityEngine::Rect get_oldRect() ;

/// @brief Method set_oldRect addr 0x2e50d8c size 0xc virtual false final false
inline void set_oldRect(::UnityEngine::Rect  value) ;

/// @brief Method get_newRect addr 0x2e50d98 size 0xc virtual false final false
inline ::UnityEngine::Rect get_newRect() ;

/// @brief Method set_newRect addr 0x2e50da4 size 0xc virtual false final false
inline void set_newRect(::UnityEngine::Rect  value) ;

/// @brief Method get_layoutPass addr 0x2e50db0 size 0x8 virtual false final false
inline int32_t get_layoutPass() ;

/// @brief Method set_layoutPass addr 0x2e50db8 size 0x8 virtual false final false
inline void set_layoutPass(int32_t  value) ;

static inline ::UnityEngine::UIElements::GeometryChangedEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e50dc0 size 0x74 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GeometryChangedEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeometryChangedEvent(GeometryChangedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeometryChangedEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeometryChangedEvent(GeometryChangedEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GeometryChangedEvent()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::GeometryChangedEvent, 0xa0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::GeometryChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::GeometryChangedEvent*, "UnityEngine.UIElements", "GeometryChangedEvent");
