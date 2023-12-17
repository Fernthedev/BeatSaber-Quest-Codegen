#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
CORDL_MODULE_EXPORT(BsonValue)
namespace System {
class Object;
}
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonValue;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonValue);
// Type: Newtonsoft.Json.Bson::BsonValue
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12074))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12077))
// CS Name: ::Newtonsoft.Json.Bson::BsonValue*
class CORDL_TYPE BsonValue : public ::Newtonsoft::Json::Bson::BsonToken {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Newtonsoft::Json::Bson::BsonToken)]{};

/// @brief Field _value offset 0x20
 __declspec(property(get=__get__value, put=__set__value)) ::System::Object*  _value;

/// @brief Field _type offset 0x28
 __declspec(property(get=__get__type, put=__set__type)) ::Newtonsoft::Json::Bson::BsonType  _type;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Bson::BsonType  Type;

constexpr void __set__value(::System::Object*  value) ;

constexpr ::System::Object* __get__value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__value() const;

constexpr void __set__type(::Newtonsoft::Json::Bson::BsonType  value) ;

constexpr ::Newtonsoft::Json::Bson::BsonType& __get__type() ;

constexpr ::Newtonsoft::Json::Bson::BsonType const& __get__type() const;

static inline ::Newtonsoft::Json::Bson::BsonValue* New_ctor(::System::Object*  value, ::Newtonsoft::Json::Bson::BsonType  type) ;

/// @brief Method .ctor addr 0x26c83c8 size 0x30 virtual false final false
inline void _ctor(::System::Object*  value, ::Newtonsoft::Json::Bson::BsonType  type) ;

/// @brief Method get_Value addr 0x26c83f8 size 0x8 virtual false final false
inline ::System::Object* get_Value() ;

/// @brief Method get_Type addr 0x26c8400 size 0x8 virtual true final false
inline ::Newtonsoft::Json::Bson::BsonType get_Type() ;

// Ctor Parameters [CppParam { name: "", ty: "BsonValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonValue(BsonValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonValue(BsonValue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BsonValue()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonValue, 0x30>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonValue);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonValue*, "Newtonsoft.Json.Bson", "BsonValue");
