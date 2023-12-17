#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarEditorFlowCoordinator)
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__FinishAction;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__EditMode;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__EditMode;
}
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__FinishAction;
}
namespace BeatSaber::AvatarCore {
class AvatarEditorFlowCoordinator;
}
// Write type traits
MARK_VAL_T(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode);
MARK_VAL_T(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator);
// Type: ::FinishAction
namespace BeatSaber::AvatarCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15170))
// CS Name: ::AvatarEditorFlowCoordinator::FinishAction
struct CORDL_TYPE __AvatarEditorFlowCoordinator__FinishAction : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AvatarEditorFlowCoordinator__FinishAction_Unwrapped
enum struct ____AvatarEditorFlowCoordinator__FinishAction_Unwrapped : int32_t {
__E_Cancel = static_cast<int32_t>(0x0),
__E_Apply = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Cancel value: static_cast<int32_t>(0x0)
static ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction const Cancel;

/// @brief Field Apply value: static_cast<int32_t>(0x1)
static ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction const Apply;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AvatarEditorFlowCoordinator__FinishAction_Unwrapped () const noexcept {
return std::bit_cast<____AvatarEditorFlowCoordinator__FinishAction_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AvatarEditorFlowCoordinator__FinishAction(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AvatarEditorFlowCoordinator__FinishAction(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AvatarEditorFlowCoordinator__FinishAction()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction, 0x4>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
// Type: ::EditMode
namespace BeatSaber::AvatarCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15171))
// CS Name: ::AvatarEditorFlowCoordinator::EditMode
struct CORDL_TYPE __AvatarEditorFlowCoordinator__EditMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AvatarEditorFlowCoordinator__EditMode_Unwrapped
enum struct ____AvatarEditorFlowCoordinator__EditMode_Unwrapped : int32_t {
__E_Create = static_cast<int32_t>(0x0),
__E_Edit = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Create value: static_cast<int32_t>(0x0)
static ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode const Create;

/// @brief Field Edit value: static_cast<int32_t>(0x1)
static ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode const Edit;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AvatarEditorFlowCoordinator__EditMode_Unwrapped () const noexcept {
return std::bit_cast<____AvatarEditorFlowCoordinator__EditMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AvatarEditorFlowCoordinator__EditMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AvatarEditorFlowCoordinator__EditMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AvatarEditorFlowCoordinator__EditMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode, 0x4>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
// Type: BeatSaber.AvatarCore::AvatarEditorFlowCoordinator
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15172))
// CS Name: ::BeatSaber.AvatarCore::AvatarEditorFlowCoordinator*
class CORDL_TYPE AvatarEditorFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
using EditMode = ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode;

using FinishAction = ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::HMUI::FlowCoordinator)]{};

/// @brief Field didFinishEvent offset 0xa8
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*  didFinishEvent;

/// @brief Field didSetupEvent offset 0xb0
 __declspec(property(get=__get_didSetupEvent, put=__set_didSetupEvent)) ::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*  didSetupEvent;

/// @brief Field randomizeAllButtonWasPressedEvent offset 0xb8
 __declspec(property(get=__get_randomizeAllButtonWasPressedEvent, put=__set_randomizeAllButtonWasPressedEvent)) ::System::Action*  randomizeAllButtonWasPressedEvent;

/// @brief Field _selectedAvatarSystem offset 0xc0
 __declspec(property(get=__get__selectedAvatarSystem, put=__set__selectedAvatarSystem)) ::BeatSaber::AvatarCore::IAvatarSystemMetadata*  _selectedAvatarSystem;

/// @brief Field _initialized offset 0xc8
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

constexpr void __set_didFinishEvent(::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*  value) ;

constexpr ::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*> __get_didFinishEvent() const;

constexpr void __set_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*  value) ;

constexpr ::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>* __get_didSetupEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*> __get_didSetupEvent() const;

constexpr void __set_randomizeAllButtonWasPressedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_randomizeAllButtonWasPressedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_randomizeAllButtonWasPressedEvent() const;

constexpr void __set__selectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  value) ;

constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* __get__selectedAvatarSystem() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> __get__selectedAvatarSystem() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

/// @brief Method add_didFinishEvent addr 0xe0b598 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*  value) ;

/// @brief Method remove_didFinishEvent addr 0xe0b648 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_3<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*,::BeatSaber::AvatarCore::IAvatarSystemMetadata*,::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction>*  value) ;

/// @brief Method add_didSetupEvent addr 0xe0b6f8 size 0xb0 virtual false final false
inline void add_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*  value) ;

/// @brief Method remove_didSetupEvent addr 0xe0b7a8 size 0xb0 virtual false final false
inline void remove_didSetupEvent(::System::Action_1<::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode>*  value) ;

/// @brief Method add_randomizeAllButtonWasPressedEvent addr 0xe0b858 size 0x9c virtual false final false
inline void add_randomizeAllButtonWasPressedEvent(::System::Action*  value) ;

/// @brief Method remove_randomizeAllButtonWasPressedEvent addr 0xe0b8f4 size 0x9c virtual false final false
inline void remove_randomizeAllButtonWasPressedEvent(::System::Action*  value) ;

/// @brief Method Setup addr 0xe0b990 size 0x60 virtual true final false
inline void Setup(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode  editMode) ;

/// @brief Method SetAvatarSystem addr 0xe0b9f0 size 0x8 virtual false final false
inline void SetAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata*  avatarSystem) ;

/// @brief Method OneTimeInitialize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OneTimeInitialize() ;

/// @brief Method Finish addr 0xe0b9f8 size 0x2c virtual false final false
inline void Finish(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction  finishAction) ;

/// @brief Method HandleBeatAvatarEditorRandomizeAllButtonWasPressed addr 0xe0ba24 size 0x1c virtual false final false
inline void HandleBeatAvatarEditorRandomizeAllButtonWasPressed() ;

static inline ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* New_ctor() ;

/// @brief Method .ctor addr 0xe0ba40 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditorFlowCoordinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarEditorFlowCoordinator(AvatarEditorFlowCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarEditorFlowCoordinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarEditorFlowCoordinator(AvatarEditorFlowCoordinator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarEditorFlowCoordinator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator, 0xd0>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode, "BeatSaber.AvatarCore", "AvatarEditorFlowCoordinator/EditMode");
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction, "BeatSaber.AvatarCore", "AvatarEditorFlowCoordinator/FinishAction");
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*, "BeatSaber.AvatarCore", "AvatarEditorFlowCoordinator");
