#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationUtilities)
namespace UnityEngine::AddressableAssets::Utility {
struct __SerializationUtilities__ObjectType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
struct __SerializationUtilities__ObjectType;
}
namespace UnityEngine::AddressableAssets::Utility {
class SerializationUtilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Utility::SerializationUtilities);
// Type: ::ObjectType
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14102))
// CS Name: ::SerializationUtilities::ObjectType
struct CORDL_TYPE __SerializationUtilities__ObjectType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____SerializationUtilities__ObjectType_Unwrapped
enum struct ____SerializationUtilities__ObjectType_Unwrapped : int32_t {
__E_AsciiString = static_cast<int32_t>(0x0),
__E_UnicodeString = static_cast<int32_t>(0x1),
__E_UInt16 = static_cast<int32_t>(0x2),
__E_UInt32 = static_cast<int32_t>(0x3),
__E_Int32 = static_cast<int32_t>(0x4),
__E_Hash128 = static_cast<int32_t>(0x5),
__E_Type = static_cast<int32_t>(0x6),
__E_JsonObject = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field AsciiString value: static_cast<int32_t>(0x0)
static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const AsciiString;

/// @brief Field UnicodeString value: static_cast<int32_t>(0x1)
static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const UnicodeString;

/// @brief Field UInt16 value: static_cast<int32_t>(0x2)
static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const UInt16;

/// @brief Field UInt32 value: static_cast<int32_t>(0x3)
static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const UInt32;

/// @brief Field Int32 value: static_cast<int32_t>(0x4)
static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const Int32;

/// @brief Field Hash128 value: static_cast<int32_t>(0x5)
static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const Hash128;

/// @brief Field Type value: static_cast<int32_t>(0x6)
static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const Type;

/// @brief Field JsonObject value: static_cast<int32_t>(0x7)
static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const JsonObject;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____SerializationUtilities__ObjectType_Unwrapped () const noexcept {
return std::bit_cast<____SerializationUtilities__ObjectType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __SerializationUtilities__ObjectType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SerializationUtilities__ObjectType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SerializationUtilities__ObjectType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::Utility
// Type: UnityEngine.AddressableAssets.Utility::SerializationUtilities
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14103))
// CS Name: ::UnityEngine.AddressableAssets.Utility::SerializationUtilities*
class CORDL_TYPE SerializationUtilities : public ::System::Object {
public:
// Declarations
using ObjectType = ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method ReadInt32FromByteArray addr 0x2a2955c size 0x74 virtual false final false
static inline int32_t ReadInt32FromByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  offset) ;

/// @brief Method WriteInt32ToByteArray addr 0x2a295d0 size 0x84 virtual false final false
static inline int32_t WriteInt32ToByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  val, int32_t  offset) ;

/// @brief Method ReadObjectFromByteArray addr 0x2a29654 size 0x5a0 virtual false final false
static inline ::System::Object* ReadObjectFromByteArray(::ArrayW<uint8_t,::Array<uint8_t>*>  keyData, int32_t  dataIndex) ;

/// @brief Method WriteObjectToByteList addr 0x2a29bf4 size 0xb60 virtual false final false
static inline int32_t WriteObjectToByteList(::System::Object*  obj, ::System::Collections::Generic::List_1<uint8_t>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "SerializationUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationUtilities(SerializationUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationUtilities(SerializationUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializationUtilities()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::SerializationUtilities, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::Utility
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities/ObjectType");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Utility::SerializationUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::SerializationUtilities*, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities");
