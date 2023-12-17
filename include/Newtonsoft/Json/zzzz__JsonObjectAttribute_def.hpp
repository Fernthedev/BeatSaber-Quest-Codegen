#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonContainerAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonObjectAttribute)
namespace Newtonsoft::Json {
struct MemberSerialization;
}
namespace Newtonsoft::Json {
struct Required;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonObjectAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonObjectAttribute);
// Type: Newtonsoft.Json::JsonObjectAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11815))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11818))
// CS Name: ::Newtonsoft.Json::JsonObjectAttribute*
class CORDL_TYPE JsonObjectAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::Newtonsoft::Json::JsonContainerAttribute)]{};

/// @brief Field _memberSerialization offset 0x4c
 __declspec(property(get=__get__memberSerialization, put=__set__memberSerialization)) ::Newtonsoft::Json::MemberSerialization  _memberSerialization;

/// @brief Field _itemRequired offset 0x50
 __declspec(property(get=__get__itemRequired, put=__set__itemRequired)) ::System::Nullable_1<::Newtonsoft::Json::Required>  _itemRequired;

 __declspec(property(get=get_MemberSerialization, put=set_MemberSerialization)) ::Newtonsoft::Json::MemberSerialization  MemberSerialization;

 __declspec(property(get=get_ItemRequired, put=set_ItemRequired)) ::Newtonsoft::Json::Required  ItemRequired;

constexpr void __set__memberSerialization(::Newtonsoft::Json::MemberSerialization  value) ;

constexpr ::Newtonsoft::Json::MemberSerialization& __get__memberSerialization() ;

constexpr ::Newtonsoft::Json::MemberSerialization const& __get__memberSerialization() const;

constexpr void __set__itemRequired(::System::Nullable_1<::Newtonsoft::Json::Required>  value) ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::Required>& __get__itemRequired() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::Required> const& __get__itemRequired() const;

/// @brief Method get_MemberSerialization addr 0x263f418 size 0x8 virtual false final false
inline ::Newtonsoft::Json::MemberSerialization get_MemberSerialization() ;

/// @brief Method set_MemberSerialization addr 0x263f420 size 0x8 virtual false final false
inline void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization  value) ;

/// @brief Method get_ItemRequired addr 0x263f428 size 0x50 virtual false final false
inline ::Newtonsoft::Json::Required get_ItemRequired() ;

/// @brief Method set_ItemRequired addr 0x263f478 size 0x68 virtual false final false
inline void set_ItemRequired(::Newtonsoft::Json::Required  value) ;

static inline ::Newtonsoft::Json::JsonObjectAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x263f4e0 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::JsonObjectAttribute* New_ctor(::Newtonsoft::Json::MemberSerialization  memberSerialization) ;

/// @brief Method .ctor addr 0x263f4e8 size 0x28 virtual false final false
inline void _ctor(::Newtonsoft::Json::MemberSerialization  memberSerialization) ;

static inline ::Newtonsoft::Json::JsonObjectAttribute* New_ctor(::StringW  id) ;

/// @brief Method .ctor addr 0x263f510 size 0x28 virtual false final false
inline void _ctor(::StringW  id) ;

// Ctor Parameters [CppParam { name: "", ty: "JsonObjectAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonObjectAttribute(JsonObjectAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonObjectAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonObjectAttribute(JsonObjectAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonObjectAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonObjectAttribute, 0x58>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonObjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonObjectAttribute*, "Newtonsoft.Json", "JsonObjectAttribute");
