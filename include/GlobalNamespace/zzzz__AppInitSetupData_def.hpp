#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInitSetupData)
namespace GlobalNamespace {
struct __AppInitSetupData__RunMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AppInitSetupData__RunMode;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AppInitSetupData__RunMode);
MARK_REF_PTR_T(::GlobalNamespace::AppInitSetupData);
// Type: ::RunMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15393))
// CS Name: ::AppInitSetupData::RunMode
struct CORDL_TYPE __AppInitSetupData__RunMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____AppInitSetupData__RunMode_Unwrapped
enum struct ____AppInitSetupData__RunMode_Unwrapped : int32_t {
__E_Game = static_cast<int32_t>(0x0),
__E_PlayTest = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Game value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__AppInitSetupData__RunMode const Game;

/// @brief Field PlayTest value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__AppInitSetupData__RunMode const PlayTest;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AppInitSetupData__RunMode_Unwrapped () const noexcept {
return std::bit_cast<____AppInitSetupData__RunMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __AppInitSetupData__RunMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AppInitSetupData__RunMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AppInitSetupData__RunMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInitSetupData__RunMode, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AppInitSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15394))
// CS Name: ::AppInitSetupData*
class CORDL_TYPE AppInitSetupData : public ::System::Object {
public:
// Declarations
using RunMode = ::GlobalNamespace::__AppInitSetupData__RunMode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field runMode offset 0x10
 __declspec(property(get=__get_runMode, put=__set_runMode)) ::GlobalNamespace::__AppInitSetupData__RunMode  runMode;

constexpr void __set_runMode(::GlobalNamespace::__AppInitSetupData__RunMode  value) ;

constexpr ::GlobalNamespace::__AppInitSetupData__RunMode& __get_runMode() ;

constexpr ::GlobalNamespace::__AppInitSetupData__RunMode const& __get_runMode() const;

static inline ::GlobalNamespace::AppInitSetupData* New_ctor() ;

/// @brief Method .ctor addr 0xe1eac0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AppInitSetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppInitSetupData(AppInitSetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppInitSetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppInitSetupData(AppInitSetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AppInitSetupData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInitSetupData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInitSetupData__RunMode, "", "AppInitSetupData/RunMode");
NEED_NO_BOX(::GlobalNamespace::AppInitSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInitSetupData*, "", "AppInitSetupData");
