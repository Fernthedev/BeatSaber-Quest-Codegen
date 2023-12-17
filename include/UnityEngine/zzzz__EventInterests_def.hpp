#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(EventInterests)
namespace UnityEngine {
struct EventType;
}
// Forward declare root types
namespace UnityEngine {
struct EventInterests;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventInterests);
// Type: UnityEngine::EventInterests
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14604))
// CS Name: ::UnityEngine::EventInterests
struct CORDL_TYPE EventInterests : public ::bs_hook::ValueTypeWrapper<0x3> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field <wantsMouseMove>k__BackingField offset 0x0
 __declspec(property(get=__get__wantsMouseMove_k__BackingField, put=__set__wantsMouseMove_k__BackingField)) bool  _wantsMouseMove_k__BackingField;

/// @brief Field <wantsMouseEnterLeaveWindow>k__BackingField offset 0x1
 __declspec(property(get=__get__wantsMouseEnterLeaveWindow_k__BackingField, put=__set__wantsMouseEnterLeaveWindow_k__BackingField)) bool  _wantsMouseEnterLeaveWindow_k__BackingField;

/// @brief Field <wantsLessLayoutEvents>k__BackingField offset 0x2
 __declspec(property(get=__get__wantsLessLayoutEvents_k__BackingField, put=__set__wantsLessLayoutEvents_k__BackingField)) bool  _wantsLessLayoutEvents_k__BackingField;

 __declspec(property(get=get_wantsMouseMove, put=set_wantsMouseMove)) bool  wantsMouseMove;

 __declspec(property(get=get_wantsMouseEnterLeaveWindow, put=set_wantsMouseEnterLeaveWindow)) bool  wantsMouseEnterLeaveWindow;

 __declspec(property(get=get_wantsLessLayoutEvents)) bool  wantsLessLayoutEvents;

constexpr void __set__wantsMouseMove_k__BackingField(bool  value) ;

constexpr bool& __get__wantsMouseMove_k__BackingField() ;

constexpr bool const& __get__wantsMouseMove_k__BackingField() const;

constexpr void __set__wantsMouseEnterLeaveWindow_k__BackingField(bool  value) ;

constexpr bool& __get__wantsMouseEnterLeaveWindow_k__BackingField() ;

constexpr bool const& __get__wantsMouseEnterLeaveWindow_k__BackingField() const;

constexpr void __set__wantsLessLayoutEvents_k__BackingField(bool  value) ;

constexpr bool& __get__wantsLessLayoutEvents_k__BackingField() ;

constexpr bool const& __get__wantsLessLayoutEvents_k__BackingField() const;

/// @brief Method get_wantsMouseMove addr 0x2cfe520 size 0x8 virtual false final false
inline bool get_wantsMouseMove() ;

/// @brief Method set_wantsMouseMove addr 0x2cfe528 size 0xc virtual false final false
inline void set_wantsMouseMove(bool  value) ;

/// @brief Method get_wantsMouseEnterLeaveWindow addr 0x2cfe534 size 0x8 virtual false final false
inline bool get_wantsMouseEnterLeaveWindow() ;

/// @brief Method set_wantsMouseEnterLeaveWindow addr 0x2cfe53c size 0xc virtual false final false
inline void set_wantsMouseEnterLeaveWindow(bool  value) ;

/// @brief Method get_wantsLessLayoutEvents addr 0x2cfe548 size 0x8 virtual false final false
inline bool get_wantsLessLayoutEvents() ;

/// @brief Method WantsEvent addr 0x2cfe550 size 0x30 virtual false final false
inline bool WantsEvent(::UnityEngine::EventType  type) ;

/// @brief Method WantsLayoutPass addr 0x2cfe580 size 0x94 virtual false final false
inline bool WantsLayoutPass(::UnityEngine::EventType  type) ;

// Ctor Parameters [CppParam { name: "_wantsMouseMove_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_wantsMouseEnterLeaveWindow_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_wantsLessLayoutEvents_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr EventInterests(bool  _wantsMouseMove_k__BackingField, bool  _wantsMouseEnterLeaveWindow_k__BackingField, bool  _wantsLessLayoutEvents_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EventInterests(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x3>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EventInterests()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventInterests, 0x3>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventInterests, "UnityEngine", "EventInterests");
