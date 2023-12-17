#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BsonBinaryType)
// Forward declare root types
namespace Newtonsoft::Json::Bson {
struct BsonBinaryType;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Bson::BsonBinaryType);
// Type: Newtonsoft.Json.Bson::BsonBinaryType
namespace Newtonsoft::Json::Bson {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12069))
// CS Name: ::Newtonsoft.Json.Bson::BsonBinaryType
struct CORDL_TYPE BsonBinaryType : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __BsonBinaryType_Unwrapped
enum struct __BsonBinaryType_Unwrapped : uint8_t {
__E_Binary = static_cast<uint8_t>(0x0u),
__E_Function = static_cast<uint8_t>(0x1u),
__E_BinaryOld = static_cast<uint8_t>(0x2u),
__E_UuidOld = static_cast<uint8_t>(0x3u),
__E_Uuid = static_cast<uint8_t>(0x4u),
__E_Md5 = static_cast<uint8_t>(0x5u),
__E_UserDefined = static_cast<uint8_t>(0x80u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Binary value: static_cast<uint8_t>(0x0u)
static ::Newtonsoft::Json::Bson::BsonBinaryType const Binary;

/// @brief Field Function value: static_cast<uint8_t>(0x1u)
static ::Newtonsoft::Json::Bson::BsonBinaryType const Function;

/// @brief Field BinaryOld value: static_cast<uint8_t>(0x2u)
static ::Newtonsoft::Json::Bson::BsonBinaryType const BinaryOld;

/// @brief Field UuidOld value: static_cast<uint8_t>(0x3u)
static ::Newtonsoft::Json::Bson::BsonBinaryType const UuidOld;

/// @brief Field Uuid value: static_cast<uint8_t>(0x4u)
static ::Newtonsoft::Json::Bson::BsonBinaryType const Uuid;

/// @brief Field Md5 value: static_cast<uint8_t>(0x5u)
static ::Newtonsoft::Json::Bson::BsonBinaryType const Md5;

/// @brief Field UserDefined value: static_cast<uint8_t>(0x80u)
static ::Newtonsoft::Json::Bson::BsonBinaryType const UserDefined;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __BsonBinaryType_Unwrapped () const noexcept {
return std::bit_cast<__BsonBinaryType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr BsonBinaryType(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BsonBinaryType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BsonBinaryType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonBinaryType, 0x1>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBinaryType, "Newtonsoft.Json.Bson", "BsonBinaryType");
