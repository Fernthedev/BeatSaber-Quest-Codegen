#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BsonToken)
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Forward declare root types
namespace Newtonsoft::Json::Bson {
class BsonToken;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Bson::BsonToken);
// Type: Newtonsoft.Json.Bson::BsonToken
namespace Newtonsoft::Json::Bson {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12074))
// CS Name: ::Newtonsoft.Json.Bson::BsonToken*
class CORDL_TYPE BsonToken : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <Parent>k__BackingField offset 0x10
 __declspec(property(get=__get__Parent_k__BackingField, put=__set__Parent_k__BackingField)) ::Newtonsoft::Json::Bson::BsonToken*  _Parent_k__BackingField;

/// @brief Field <CalculatedSize>k__BackingField offset 0x18
 __declspec(property(get=__get__CalculatedSize_k__BackingField, put=__set__CalculatedSize_k__BackingField)) int32_t  _CalculatedSize_k__BackingField;

 __declspec(property(get=get_Type)) ::Newtonsoft::Json::Bson::BsonType  Type;

 __declspec(property(get=get_Parent, put=set_Parent)) ::Newtonsoft::Json::Bson::BsonToken*  Parent;

 __declspec(property(get=get_CalculatedSize, put=set_CalculatedSize)) int32_t  CalculatedSize;

constexpr void __set__Parent_k__BackingField(::Newtonsoft::Json::Bson::BsonToken*  value) ;

constexpr ::Newtonsoft::Json::Bson::BsonToken* __get__Parent_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonToken*> __get__Parent_k__BackingField() const;

constexpr void __set__CalculatedSize_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__CalculatedSize_k__BackingField() ;

constexpr int32_t const& __get__CalculatedSize_k__BackingField() const;

/// @brief Method get_Type addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Newtonsoft::Json::Bson::BsonType get_Type() ;

/// @brief Method get_Parent addr 0x26c8068 size 0x8 virtual false final false
inline ::Newtonsoft::Json::Bson::BsonToken* get_Parent() ;

/// @brief Method set_Parent addr 0x26c8070 size 0x8 virtual false final false
inline void set_Parent(::Newtonsoft::Json::Bson::BsonToken*  value) ;

/// @brief Method get_CalculatedSize addr 0x26c8078 size 0x8 virtual false final false
inline int32_t get_CalculatedSize() ;

/// @brief Method set_CalculatedSize addr 0x26c8080 size 0x8 virtual false final false
inline void set_CalculatedSize(int32_t  value) ;

static inline ::Newtonsoft::Json::Bson::BsonToken* New_ctor() ;

/// @brief Method .ctor addr 0x26c8088 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BsonToken", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BsonToken(BsonToken && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BsonToken", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BsonToken(BsonToken const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BsonToken()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonToken, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Bson
NEED_NO_BOX(::Newtonsoft::Json::Bson::BsonToken);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonToken*, "Newtonsoft.Json.Bson", "BsonToken");
