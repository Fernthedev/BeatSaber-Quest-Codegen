#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionObjectiveChecker)
namespace GlobalNamespace {
struct __MissionObjectiveChecker__Status;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MissionObjectiveTypeSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MissionObjectiveChecker__Status;
}
namespace GlobalNamespace {
class MissionObjectiveChecker;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MissionObjectiveChecker__Status);
MARK_REF_PTR_T(::GlobalNamespace::MissionObjectiveChecker);
// Type: ::Status
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5092))
// CS Name: ::MissionObjectiveChecker::Status
struct CORDL_TYPE __MissionObjectiveChecker__Status : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MissionObjectiveChecker__Status_Unwrapped
enum struct ____MissionObjectiveChecker__Status_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_NotClearedYet = static_cast<int32_t>(0x1),
__E_NotFailedYet = static_cast<int32_t>(0x2),
__E_Cleared = static_cast<int32_t>(0x3),
__E_Failed = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__MissionObjectiveChecker__Status const None;

/// @brief Field NotClearedYet value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__MissionObjectiveChecker__Status const NotClearedYet;

/// @brief Field NotFailedYet value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__MissionObjectiveChecker__Status const NotFailedYet;

/// @brief Field Cleared value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__MissionObjectiveChecker__Status const Cleared;

/// @brief Field Failed value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__MissionObjectiveChecker__Status const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MissionObjectiveChecker__Status_Unwrapped () const noexcept {
return std::bit_cast<____MissionObjectiveChecker__Status_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MissionObjectiveChecker__Status(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MissionObjectiveChecker__Status(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MissionObjectiveChecker__Status()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionObjectiveChecker__Status, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5093))
// CS Name: ::MissionObjectiveChecker*
class CORDL_TYPE MissionObjectiveChecker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Status = ::GlobalNamespace::__MissionObjectiveChecker__Status;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _missionObjectiveType offset 0x18
 __declspec(property(get=__get__missionObjectiveType, put=__set__missionObjectiveType)) ::GlobalNamespace::MissionObjectiveTypeSO*  _missionObjectiveType;

/// @brief Field statusDidChangeEvent offset 0x20
 __declspec(property(get=__get_statusDidChangeEvent, put=__set_statusDidChangeEvent)) ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*  statusDidChangeEvent;

/// @brief Field checkedValueDidChangeEvent offset 0x28
 __declspec(property(get=__get_checkedValueDidChangeEvent, put=__set_checkedValueDidChangeEvent)) ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*  checkedValueDidChangeEvent;

/// @brief Field _status offset 0x30
 __declspec(property(get=__get__status, put=__set__status)) ::GlobalNamespace::__MissionObjectiveChecker__Status  _status;

/// @brief Field _checkedValue offset 0x34
 __declspec(property(get=__get__checkedValue, put=__set__checkedValue)) int32_t  _checkedValue;

/// @brief Field _missionObjective offset 0x38
 __declspec(property(get=__get__missionObjective, put=__set__missionObjective)) ::GlobalNamespace::MissionObjective*  _missionObjective;

/// @brief Field _disableChecking offset 0x40
 __declspec(property(get=__get__disableChecking, put=__set__disableChecking)) bool  _disableChecking;

 __declspec(property(get=get_missionObjectiveType)) ::GlobalNamespace::MissionObjectiveTypeSO*  missionObjectiveType;

 __declspec(property(get=get_missionObjective)) ::GlobalNamespace::MissionObjective*  missionObjective;

 __declspec(property(get=get_disableChecking, put=set_disableChecking)) bool  disableChecking;

 __declspec(property(get=get_status, put=set_status)) ::GlobalNamespace::__MissionObjectiveChecker__Status  status;

 __declspec(property(get=get_checkedValue, put=set_checkedValue)) int32_t  checkedValue;

constexpr void __set__missionObjectiveType(::GlobalNamespace::MissionObjectiveTypeSO*  value) ;

constexpr ::GlobalNamespace::MissionObjectiveTypeSO* __get__missionObjectiveType() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjectiveTypeSO*> __get__missionObjectiveType() const;

constexpr void __set_statusDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>* __get_statusDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*> __get_statusDidChangeEvent() const;

constexpr void __set_checkedValueDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>* __get_checkedValueDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*> __get_checkedValueDidChangeEvent() const;

constexpr void __set__status(::GlobalNamespace::__MissionObjectiveChecker__Status  value) ;

constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status& __get__status() ;

constexpr ::GlobalNamespace::__MissionObjectiveChecker__Status const& __get__status() const;

constexpr void __set__checkedValue(int32_t  value) ;

constexpr int32_t& __get__checkedValue() ;

constexpr int32_t const& __get__checkedValue() const;

constexpr void __set__missionObjective(::GlobalNamespace::MissionObjective*  value) ;

constexpr ::GlobalNamespace::MissionObjective* __get__missionObjective() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionObjective*> __get__missionObjective() const;

constexpr void __set__disableChecking(bool  value) ;

constexpr bool& __get__disableChecking() ;

constexpr bool const& __get__disableChecking() const;

/// @brief Method add_statusDidChangeEvent addr 0x23cc0fc size 0xb0 virtual false final false
inline void add_statusDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*  value) ;

/// @brief Method remove_statusDidChangeEvent addr 0x23cc1ac size 0xb0 virtual false final false
inline void remove_statusDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*  value) ;

/// @brief Method add_checkedValueDidChangeEvent addr 0x23cc25c size 0xb0 virtual false final false
inline void add_checkedValueDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*  value) ;

/// @brief Method remove_checkedValueDidChangeEvent addr 0x23cc30c size 0xb0 virtual false final false
inline void remove_checkedValueDidChangeEvent(::System::Action_1<::GlobalNamespace::MissionObjectiveChecker*>*  value) ;

/// @brief Method get_missionObjectiveType addr 0x23cc3bc size 0x8 virtual false final false
inline ::GlobalNamespace::MissionObjectiveTypeSO* get_missionObjectiveType() ;

/// @brief Method get_missionObjective addr 0x23cc3c4 size 0x8 virtual false final false
inline ::GlobalNamespace::MissionObjective* get_missionObjective() ;

/// @brief Method get_disableChecking addr 0x23cc3cc size 0x8 virtual false final false
inline bool get_disableChecking() ;

/// @brief Method set_disableChecking addr 0x23cc3d4 size 0xc virtual false final false
inline void set_disableChecking(bool  value) ;

/// @brief Method get_status addr 0x23cc3e0 size 0x8 virtual false final false
inline ::GlobalNamespace::__MissionObjectiveChecker__Status get_status() ;

/// @brief Method set_status addr 0x23cb1b4 size 0x3c virtual false final false
inline void set_status(::GlobalNamespace::__MissionObjectiveChecker__Status  value) ;

/// @brief Method get_checkedValue addr 0x23cc3e8 size 0x8 virtual false final false
inline int32_t get_checkedValue() ;

/// @brief Method set_checkedValue addr 0x23cb314 size 0x3c virtual false final false
inline void set_checkedValue(int32_t  value) ;

/// @brief Method SetCheckedMissionObjective addr 0x23cc3f0 size 0x10 virtual false final false
inline void SetCheckedMissionObjective(::GlobalNamespace::MissionObjective*  missionObjective) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

static inline ::GlobalNamespace::MissionObjectiveChecker* New_ctor() ;

/// @brief Method .ctor addr 0x23cba1c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionObjectiveChecker(MissionObjectiveChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectiveChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionObjectiveChecker(MissionObjectiveChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionObjectiveChecker()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionObjectiveChecker, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionObjectiveChecker__Status, "", "MissionObjectiveChecker/Status");
NEED_NO_BOX(::GlobalNamespace::MissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectiveChecker*, "", "MissionObjectiveChecker");
