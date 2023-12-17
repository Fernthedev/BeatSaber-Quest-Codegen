#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BsonBinary)
namespace Newtonsoft::Json::Bson {
struct BsonBinaryType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonBinary;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonBinary);
// Type: Newtonsoft.Json.Bson::BsonBinary
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12077))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12079))
// CS Name: ::Newtonsoft.Json.Bson::BsonBinary*
class CORDL_TYPE BsonBinary : public ::Newtonsoft::Json::Bson::BsonValue {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Newtonsoft::Json::Bson::BsonValue)]{};

/// @brief Field <BinaryType>k__BackingField offset 0x29
 __declspec(property(get=__get__BinaryType_k__BackingField, put=__set__BinaryType_k__BackingField)) ::Newtonsoft::Json::Bson::BsonBinaryType  _BinaryType_k__BackingField;

 __declspec(property(get=get_BinaryType, put=set_BinaryType)) ::Newtonsoft::Json::Bson::BsonBinaryType  BinaryType;

constexpr void __set__BinaryType_k__BackingField(::Newtonsoft::Json::Bson::BsonBinaryType  value) ;

constexpr ::Newtonsoft::Json::Bson::BsonBinaryType& __get__BinaryType_k__BackingField() ;

constexpr ::Newtonsoft::Json::Bson::BsonBinaryType const& __get__BinaryType_k__BackingField() const;

/// @brief Method get_BinaryType addr 0x26c842c size 0x8 virtual false final false
inline ::Newtonsoft::Json::Bson::BsonBinaryType get_BinaryType() ;

/// @brief Method set_BinaryType addr 0x26c8434 size 0x8 virtual false final false
inline void set_BinaryType(::Newtonsoft::Json::Bson::BsonBinaryType  value) ;

static inline ::Newtonsoft::Json::Bson::BsonBinary* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  value, ::Newtonsoft::Json::Bson::BsonBinaryType  binaryType) ;

/// @brief Method .ctor addr 0x26c843c size 0x38 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  value, ::Newtonsoft::Json::Bson::BsonBinaryType  binaryType) ;

// Ctor Parameters [CppParam { name: "", ty: "BsonBinary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonBinary(BsonBinary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonBinary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonBinary(BsonBinary const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BsonBinary()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonBinary, 0x30>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonBinary);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonBinary*, "Newtonsoft.Json.Bson", "BsonBinary");
