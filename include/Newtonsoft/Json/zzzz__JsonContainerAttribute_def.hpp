#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonContainerAttribute)
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
namespace Newtonsoft::Json {
struct ReferenceLoopHandling;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonContainerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonContainerAttribute);
// Type: Newtonsoft.Json::JsonContainerAttribute
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11815))
// CS Name: ::Newtonsoft.Json::JsonContainerAttribute*
class CORDL_TYPE JsonContainerAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Attribute)]{};

/// @brief Field <Id>k__BackingField offset 0x10
 __declspec(property(get=__get__Id_k__BackingField, put=__set__Id_k__BackingField)) ::StringW  _Id_k__BackingField;

/// @brief Field <Title>k__BackingField offset 0x18
 __declspec(property(get=__get__Title_k__BackingField, put=__set__Title_k__BackingField)) ::StringW  _Title_k__BackingField;

/// @brief Field <Description>k__BackingField offset 0x20
 __declspec(property(get=__get__Description_k__BackingField, put=__set__Description_k__BackingField)) ::StringW  _Description_k__BackingField;

/// @brief Field <ItemConverterType>k__BackingField offset 0x28
 __declspec(property(get=__get__ItemConverterType_k__BackingField, put=__set__ItemConverterType_k__BackingField)) ::System::Type*  _ItemConverterType_k__BackingField;

/// @brief Field <ItemConverterParameters>k__BackingField offset 0x30
 __declspec(property(get=__get__ItemConverterParameters_k__BackingField, put=__set__ItemConverterParameters_k__BackingField)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  _ItemConverterParameters_k__BackingField;

/// @brief Field _isReference offset 0x38
 __declspec(property(get=__get__isReference, put=__set__isReference)) ::System::Nullable_1<bool>  _isReference;

/// @brief Field _itemIsReference offset 0x3a
 __declspec(property(get=__get__itemIsReference, put=__set__itemIsReference)) ::System::Nullable_1<bool>  _itemIsReference;

/// @brief Field _itemReferenceLoopHandling offset 0x3c
 __declspec(property(get=__get__itemReferenceLoopHandling, put=__set__itemReferenceLoopHandling)) ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  _itemReferenceLoopHandling;

/// @brief Field _itemTypeNameHandling offset 0x44
 __declspec(property(get=__get__itemTypeNameHandling, put=__set__itemTypeNameHandling)) ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  _itemTypeNameHandling;

 __declspec(property(get=get_Id, put=set_Id)) ::StringW  Id;

 __declspec(property(get=get_Title, put=set_Title)) ::StringW  Title;

 __declspec(property(get=get_Description, put=set_Description)) ::StringW  Description;

 __declspec(property(get=get_ItemConverterType, put=set_ItemConverterType)) ::System::Type*  ItemConverterType;

 __declspec(property(get=get_ItemConverterParameters, put=set_ItemConverterParameters)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  ItemConverterParameters;

 __declspec(property(get=get_IsReference, put=set_IsReference)) bool  IsReference;

 __declspec(property(get=get_ItemIsReference, put=set_ItemIsReference)) bool  ItemIsReference;

 __declspec(property(get=get_ItemReferenceLoopHandling, put=set_ItemReferenceLoopHandling)) ::Newtonsoft::Json::ReferenceLoopHandling  ItemReferenceLoopHandling;

 __declspec(property(get=get_ItemTypeNameHandling, put=set_ItemTypeNameHandling)) ::Newtonsoft::Json::TypeNameHandling  ItemTypeNameHandling;

constexpr void __set__Id_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Id_k__BackingField() ;

constexpr ::StringW const& __get__Id_k__BackingField() const;

constexpr void __set__Title_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Title_k__BackingField() ;

constexpr ::StringW const& __get__Title_k__BackingField() const;

constexpr void __set__Description_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Description_k__BackingField() ;

constexpr ::StringW const& __get__Description_k__BackingField() const;

constexpr void __set__ItemConverterType_k__BackingField(::System::Type*  value) ;

constexpr ::System::Type* __get__ItemConverterType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__ItemConverterType_k__BackingField() const;

constexpr void __set__ItemConverterParameters_k__BackingField(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get__ItemConverterParameters_k__BackingField() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get__ItemConverterParameters_k__BackingField() const;

constexpr void __set__isReference(::System::Nullable_1<bool>  value) ;

constexpr ::System::Nullable_1<bool>& __get__isReference() ;

constexpr ::System::Nullable_1<bool> const& __get__isReference() const;

constexpr void __set__itemIsReference(::System::Nullable_1<bool>  value) ;

constexpr ::System::Nullable_1<bool>& __get__itemIsReference() ;

constexpr ::System::Nullable_1<bool> const& __get__itemIsReference() const;

constexpr void __set__itemReferenceLoopHandling(::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>  value) ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling>& __get__itemReferenceLoopHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::ReferenceLoopHandling> const& __get__itemReferenceLoopHandling() const;

constexpr void __set__itemTypeNameHandling(::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>  value) ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling>& __get__itemTypeNameHandling() ;

constexpr ::System::Nullable_1<::Newtonsoft::Json::TypeNameHandling> const& __get__itemTypeNameHandling() const;

/// @brief Method get_Id addr 0x263f01c size 0x8 virtual false final false
inline ::StringW get_Id() ;

/// @brief Method set_Id addr 0x263f024 size 0x8 virtual false final false
inline void set_Id(::StringW  value) ;

/// @brief Method get_Title addr 0x263f02c size 0x8 virtual false final false
inline ::StringW get_Title() ;

/// @brief Method set_Title addr 0x263f034 size 0x8 virtual false final false
inline void set_Title(::StringW  value) ;

/// @brief Method get_Description addr 0x263f03c size 0x8 virtual false final false
inline ::StringW get_Description() ;

/// @brief Method set_Description addr 0x263f044 size 0x8 virtual false final false
inline void set_Description(::StringW  value) ;

/// @brief Method get_ItemConverterType addr 0x263f04c size 0x8 virtual false final false
inline ::System::Type* get_ItemConverterType() ;

/// @brief Method set_ItemConverterType addr 0x263f054 size 0x8 virtual false final false
inline void set_ItemConverterType(::System::Type*  value) ;

/// @brief Method get_ItemConverterParameters addr 0x263f05c size 0x8 virtual false final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> get_ItemConverterParameters() ;

/// @brief Method set_ItemConverterParameters addr 0x263f064 size 0x8 virtual false final false
inline void set_ItemConverterParameters(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

/// @brief Method get_IsReference addr 0x263f06c size 0x5c virtual false final false
inline bool get_IsReference() ;

/// @brief Method set_IsReference addr 0x263f0c8 size 0x68 virtual false final false
inline void set_IsReference(bool  value) ;

/// @brief Method get_ItemIsReference addr 0x263f130 size 0x5c virtual false final false
inline bool get_ItemIsReference() ;

/// @brief Method set_ItemIsReference addr 0x263f18c size 0x68 virtual false final false
inline void set_ItemIsReference(bool  value) ;

/// @brief Method get_ItemReferenceLoopHandling addr 0x263f1f4 size 0x50 virtual false final false
inline ::Newtonsoft::Json::ReferenceLoopHandling get_ItemReferenceLoopHandling() ;

/// @brief Method set_ItemReferenceLoopHandling addr 0x263f244 size 0x68 virtual false final false
inline void set_ItemReferenceLoopHandling(::Newtonsoft::Json::ReferenceLoopHandling  value) ;

/// @brief Method get_ItemTypeNameHandling addr 0x263f2ac size 0x50 virtual false final false
inline ::Newtonsoft::Json::TypeNameHandling get_ItemTypeNameHandling() ;

/// @brief Method set_ItemTypeNameHandling addr 0x263f2fc size 0x68 virtual false final false
inline void set_ItemTypeNameHandling(::Newtonsoft::Json::TypeNameHandling  value) ;

static inline ::Newtonsoft::Json::JsonContainerAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x263e3c4 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::JsonContainerAttribute* New_ctor(::StringW  id) ;

/// @brief Method .ctor addr 0x263e3f4 size 0x28 virtual false final false
inline void _ctor(::StringW  id) ;

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonContainerAttribute(JsonContainerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonContainerAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonContainerAttribute(JsonContainerAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JsonContainerAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonContainerAttribute, 0x50>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonContainerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonContainerAttribute*, "Newtonsoft.Json", "JsonContainerAttribute");
