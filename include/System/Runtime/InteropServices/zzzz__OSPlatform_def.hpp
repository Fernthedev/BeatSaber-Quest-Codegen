#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OSPlatform)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
struct OSPlatform;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::OSPlatform);
// Type: System.Runtime.InteropServices::OSPlatform
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3307))
// CS Name: ::System.Runtime.InteropServices::OSPlatform
struct CORDL_TYPE OSPlatform : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _osPlatform offset 0x0
 __declspec(property(get=__get__osPlatform, put=__set__osPlatform)) ::StringW  _osPlatform;

/// @brief Convert operator to "::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>"
constexpr operator  ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>*() ;

constexpr void __set__osPlatform(::StringW  value) ;

constexpr ::StringW& __get__osPlatform() ;

constexpr ::StringW const& __get__osPlatform() const;

static inline void setStaticF__Linux_k__BackingField(::System::Runtime::InteropServices::OSPlatform  value) ;

static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__Linux_k__BackingField() ;

static inline void setStaticF__OSX_k__BackingField(::System::Runtime::InteropServices::OSPlatform  value) ;

static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__OSX_k__BackingField() ;

static inline void setStaticF__Windows_k__BackingField(::System::Runtime::InteropServices::OSPlatform  value) ;

static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__Windows_k__BackingField() ;

/// @brief Method get_Linux addr 0x24d681c size 0x58 virtual false final false
static inline ::System::Runtime::InteropServices::OSPlatform get_Linux() ;

/// @brief Method get_OSX addr 0x24d6874 size 0x58 virtual false final false
static inline ::System::Runtime::InteropServices::OSPlatform get_OSX() ;

/// @brief Method get_Windows addr 0x24d68cc size 0x58 virtual false final false
static inline ::System::Runtime::InteropServices::OSPlatform get_Windows() ;

/// @brief Method .ctor addr 0x24d6924 size 0xbc virtual false final false
inline void _ctor(::StringW  osPlatform) ;

/// @brief Method Create addr 0x24d69e0 size 0x20 virtual false final false
static inline ::System::Runtime::InteropServices::OSPlatform Create(::StringW  osPlatform) ;

/// @brief Method Equals addr 0x24d6a00 size 0x10 virtual true final true
inline bool Equals(::System::Runtime::InteropServices::OSPlatform  other) ;

/// @brief Method Equals addr 0x24d6a10 size 0x10 virtual false final false
inline bool Equals(::StringW  other) ;

/// @brief Method Equals addr 0x24d6a20 size 0x80 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x24d6aa0 size 0x18 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x24d6ab8 size 0x54 virtual true final false
inline ::StringW ToString() ;

/// @brief Method op_Equality addr 0x24d6b0c size 0xc virtual false final false
static inline bool op_Equality(::System::Runtime::InteropServices::OSPlatform  left, ::System::Runtime::InteropServices::OSPlatform  right) ;

// Ctor Parameters [CppParam { name: "_osPlatform", ty: "::StringW", modifiers: "", def_value: None }]
constexpr OSPlatform(::StringW  _osPlatform) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OSPlatform(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OSPlatform()  = default;


// Fields

// Static field <Linux>k__BackingField

// Static field <OSX>k__BackingField

// Static field <Windows>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::OSPlatform, 0x8>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OSPlatform, "System.Runtime.InteropServices", "OSPlatform");
