#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeUpdater_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseVisualTreeHierarchyTrackerUpdater)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct HierarchyChangeType;
}
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
struct __BaseVisualTreeHierarchyTrackerUpdater__State;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __BaseVisualTreeHierarchyTrackerUpdater__State;
}
namespace UnityEngine::UIElements {
class BaseVisualTreeHierarchyTrackerUpdater;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State);
MARK_REF_PTR_T(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater);
// Type: ::State
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6786))
// CS Name: ::BaseVisualTreeHierarchyTrackerUpdater::State
struct CORDL_TYPE __BaseVisualTreeHierarchyTrackerUpdater__State : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped
enum struct ____BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped : int32_t {
__E_Waiting = static_cast<int32_t>(0x0),
__E_TrackingAddOrMove = static_cast<int32_t>(0x1),
__E_TrackingRemove = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Waiting value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State const Waiting;

/// @brief Field TrackingAddOrMove value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State const TrackingAddOrMove;

/// @brief Field TrackingRemove value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State const TrackingRemove;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped () const noexcept {
return std::bit_cast<____BaseVisualTreeHierarchyTrackerUpdater__State_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __BaseVisualTreeHierarchyTrackerUpdater__State(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BaseVisualTreeHierarchyTrackerUpdater__State(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BaseVisualTreeHierarchyTrackerUpdater__State()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseVisualTreeHierarchyTrackerUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6754))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6787))
// CS Name: ::UnityEngine.UIElements::BaseVisualTreeHierarchyTrackerUpdater*
class CORDL_TYPE BaseVisualTreeHierarchyTrackerUpdater : public ::UnityEngine::UIElements::BaseVisualTreeUpdater {
public:
// Declarations
using State = ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::UIElements::BaseVisualTreeUpdater)]{};

/// @brief Field m_State offset 0x20
 __declspec(property(get=__get_m_State, put=__set_m_State)) ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State  m_State;

/// @brief Field m_CurrentChangeElement offset 0x28
 __declspec(property(get=__get_m_CurrentChangeElement, put=__set_m_CurrentChangeElement)) ::UnityEngine::UIElements::VisualElement*  m_CurrentChangeElement;

/// @brief Field m_CurrentChangeParent offset 0x30
 __declspec(property(get=__get_m_CurrentChangeParent, put=__set_m_CurrentChangeParent)) ::UnityEngine::UIElements::VisualElement*  m_CurrentChangeParent;

constexpr void __set_m_State(::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State  value) ;

constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State& __get_m_State() ;

constexpr ::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State const& __get_m_State() const;

constexpr void __set_m_CurrentChangeElement(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_CurrentChangeElement() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_CurrentChangeElement() const;

constexpr void __set_m_CurrentChangeParent(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_CurrentChangeParent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_CurrentChangeParent() const;

/// @brief Method OnHierarchyChange addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnHierarchyChange(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::HierarchyChangeType  type) ;

/// @brief Method OnVersionChanged addr 0x2dba6bc size 0x2c virtual true final false
inline void OnVersionChanged(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::VersionChangeType  versionChangeType) ;

/// @brief Method Update addr 0x2dba88c size 0x94 virtual true final false
inline void Update() ;

/// @brief Method ProcessNewChange addr 0x2dba6e8 size 0x84 virtual false final false
inline void ProcessNewChange(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method ProcessAddOrMove addr 0x2dba7d0 size 0xbc virtual false final false
inline void ProcessAddOrMove(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method ProcessRemove addr 0x2dba76c size 0x64 virtual false final false
inline void ProcessRemove(::UnityEngine::UIElements::VisualElement*  ve) ;

static inline ::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater* New_ctor() ;

/// @brief Method .ctor addr 0x2dba920 size 0xc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeHierarchyTrackerUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseVisualTreeHierarchyTrackerUpdater(BaseVisualTreeHierarchyTrackerUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseVisualTreeHierarchyTrackerUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseVisualTreeHierarchyTrackerUpdater(BaseVisualTreeHierarchyTrackerUpdater const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseVisualTreeHierarchyTrackerUpdater()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__BaseVisualTreeHierarchyTrackerUpdater__State, "UnityEngine.UIElements", "BaseVisualTreeHierarchyTrackerUpdater/State");
NEED_NO_BOX(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVisualTreeHierarchyTrackerUpdater*, "UnityEngine.UIElements", "BaseVisualTreeHierarchyTrackerUpdater");
