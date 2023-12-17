#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyOnlineServicesAvailabilityModel)
namespace GlobalNamespace {
struct __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;
}
namespace GlobalNamespace {
class ISonyOnlineServicesAvailabilityModel;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability);
MARK_REF_PTR_T(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel);
// Type: ::OnlineServicesAvailability
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4571))
// CS Name: ::ISonyOnlineServicesAvailabilityModel::OnlineServicesAvailability
struct CORDL_TYPE __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped
enum struct ____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped : int32_t {
__E_Available = static_cast<int32_t>(0x0),
__E_Unavailable = static_cast<int32_t>(0x1),
__E_UnknownError = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Available value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Available;

/// @brief Field Unavailable value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Unavailable;

/// @brief Field UnknownError value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const UnknownError;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped () const noexcept {
return std::bit_cast<____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ISonyOnlineServicesAvailabilityModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4572))
// CS Name: ::ISonyOnlineServicesAvailabilityModel*
class CORDL_TYPE ISonyOnlineServicesAvailabilityModel {
public:
// Declarations
using OnlineServicesAvailability = ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;

/// @brief Method GetOnlineServicesAvailabilityAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability>* GetOnlineServicesAvailabilityAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "ISonyOnlineServicesAvailabilityModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISonyOnlineServicesAvailabilityModel(ISonyOnlineServicesAvailabilityModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISonyOnlineServicesAvailabilityModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISonyOnlineServicesAvailabilityModel(ISonyOnlineServicesAvailabilityModel const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, "", "ISonyOnlineServicesAvailabilityModel/OnlineServicesAvailability");
NEED_NO_BOX(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*, "", "ISonyOnlineServicesAvailabilityModel");
