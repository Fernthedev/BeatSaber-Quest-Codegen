#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Development)
namespace Unity::XR::Oculus {
struct __Development__UserDeveloperModeSettingCache;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct __Development__UserDeveloperModeSettingCache;
}
namespace Unity::XR::Oculus {
class Development;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache);
MARK_REF_PTR_T(::Unity::XR::Oculus::Development);
// Type: ::UserDeveloperModeSettingCache
namespace Unity::XR::Oculus {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15129))
// CS Name: ::Development::UserDeveloperModeSettingCache
struct CORDL_TYPE __Development__UserDeveloperModeSettingCache : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Development__UserDeveloperModeSettingCache_Unwrapped
enum struct ____Development__UserDeveloperModeSettingCache_Unwrapped : int32_t {
__E_NoUserSettingCached = static_cast<int32_t>(0x0),
__E_UserSettingFalse = static_cast<int32_t>(0x1),
__E_UserSettingTrue = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoUserSettingCached value: static_cast<int32_t>(0x0)
static ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache const NoUserSettingCached;

/// @brief Field UserSettingFalse value: static_cast<int32_t>(0x1)
static ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache const UserSettingFalse;

/// @brief Field UserSettingTrue value: static_cast<int32_t>(0x2)
static ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache const UserSettingTrue;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Development__UserDeveloperModeSettingCache_Unwrapped () const noexcept {
return std::bit_cast<____Development__UserDeveloperModeSettingCache_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Development__UserDeveloperModeSettingCache(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Development__UserDeveloperModeSettingCache(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Development__UserDeveloperModeSettingCache()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache, 0x4>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
// Type: Unity.XR.Oculus::Development
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15130))
// CS Name: ::Unity.XR.Oculus::Development*
class CORDL_TYPE Development : public ::System::Object {
public:
// Declarations
using UserDeveloperModeSettingCache = ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_CachedMode(::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache  value) ;

static inline ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache getStaticF_s_CachedMode() ;

/// @brief Method TrySetDeveloperMode addr 0x2c77668 size 0x58 virtual false final false
static inline void TrySetDeveloperMode(bool  active) ;

/// @brief Method OverrideDeveloperModeStart addr 0x2c776c0 size 0xcc virtual false final false
static inline void OverrideDeveloperModeStart() ;

/// @brief Method OverrideDeveloperModeStop addr 0x2c77794 size 0x74 virtual false final false
static inline void OverrideDeveloperModeStop() ;

// Ctor Parameters [CppParam { name: "", ty: "Development", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Development(Development && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Development", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Development(Development const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Development()  = default;
public:


// Fields

// Static field s_CachedMode


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Development, 0x10>, "Size mismatch!");

} // namespace end def Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache, "Unity.XR.Oculus", "Development/UserDeveloperModeSettingCache");
NEED_NO_BOX(::Unity::XR::Oculus::Development);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Development*, "Unity.XR.Oculus", "Development");
