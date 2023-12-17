#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReflectionObject)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_1;
}
namespace System {
class Type;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_0;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json::Serialization {
template<typename T>
class ObjectConstructor_1;
}
namespace System::Reflection {
class MethodBase;
}
namespace Newtonsoft::Json::Utilities {
class ReflectionMember;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace Newtonsoft::Json::Utilities {
template<typename T,typename TResult>
class MethodCall_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ReflectionObject;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_0;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_1;
}
namespace Newtonsoft::Json::Utilities {
class __ReflectionObject____c__DisplayClass13_2;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ReflectionObject);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2);
// Type: ::<>c__DisplayClass13_0
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11862))
// CS Name: ::ReflectionObject::<>c__DisplayClass13_0*
class CORDL_TYPE __ReflectionObject____c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field ctor offset 0x10
 __declspec(property(get=__get_ctor, put=__set_ctor)) ::System::Func_1<::System::Object*>*  ctor;

constexpr void __set_ctor(::System::Func_1<::System::Object*>*  value) ;

constexpr ::System::Func_1<::System::Object*>* __get_ctor() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> __get_ctor() const;

static inline ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0* New_ctor() ;

/// @brief Method .ctor addr 0x265b3ac size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Create>b__0 addr 0x265b8c4 size 0x24 virtual false final false
inline ::System::Object* _Create_b__0(::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionObject____c__DisplayClass13_0(__ReflectionObject____c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionObject____c__DisplayClass13_0(__ReflectionObject____c__DisplayClass13_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionObject____c__DisplayClass13_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass13_1
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11863))
// CS Name: ::ReflectionObject::<>c__DisplayClass13_1*
class CORDL_TYPE __ReflectionObject____c__DisplayClass13_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field call offset 0x10
 __declspec(property(get=__get_call, put=__set_call)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*  call;

constexpr void __set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*  value) ;

constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>* __get_call() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*> __get_call() const;

static inline ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1* New_ctor() ;

/// @brief Method .ctor addr 0x265b690 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Create>b__1 addr 0x265b8e8 size 0x78 virtual false final false
inline ::System::Object* _Create_b__1(::System::Object*  target) ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionObject____c__DisplayClass13_1(__ReflectionObject____c__DisplayClass13_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionObject____c__DisplayClass13_1(__ReflectionObject____c__DisplayClass13_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionObject____c__DisplayClass13_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Type: ::<>c__DisplayClass13_2
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11864))
// CS Name: ::ReflectionObject::<>c__DisplayClass13_2*
class CORDL_TYPE __ReflectionObject____c__DisplayClass13_2 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field call offset 0x10
 __declspec(property(get=__get_call, put=__set_call)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*  call;

constexpr void __set_call(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*  value) ;

constexpr ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>* __get_call() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*,::System::Object*>*> __get_call() const;

static inline ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2* New_ctor() ;

/// @brief Method .ctor addr 0x265b698 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Create>b__2 addr 0x265b960 size 0xb8 virtual false final false
inline void _Create_b__2(::System::Object*  target, ::System::Object*  arg) ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionObject____c__DisplayClass13_2(__ReflectionObject____c__DisplayClass13_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionObject____c__DisplayClass13_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionObject____c__DisplayClass13_2(__ReflectionObject____c__DisplayClass13_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionObject____c__DisplayClass13_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2, 0x18>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
// Type: Newtonsoft.Json.Utilities::ReflectionObject
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11865))
// CS Name: ::Newtonsoft.Json.Utilities::ReflectionObject*
class CORDL_TYPE ReflectionObject : public ::System::Object {
public:
// Declarations
using __c__DisplayClass13_2 = ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2;

using __c__DisplayClass13_1 = ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1;

using __c__DisplayClass13_0 = ::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <Creator>k__BackingField offset 0x10
 __declspec(property(get=__get__Creator_k__BackingField, put=__set__Creator_k__BackingField)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*  _Creator_k__BackingField;

/// @brief Field <Members>k__BackingField offset 0x18
 __declspec(property(get=__get__Members_k__BackingField, put=__set__Members_k__BackingField)) ::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Utilities::ReflectionMember*>*  _Members_k__BackingField;

 __declspec(property(get=get_Creator, put=set_Creator)) ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*  Creator;

 __declspec(property(get=get_Members, put=set_Members)) ::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Utilities::ReflectionMember*>*  Members;

constexpr void __set__Creator_k__BackingField(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*  value) ;

constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* __get__Creator_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> __get__Creator_k__BackingField() const;

constexpr void __set__Members_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Utilities::ReflectionMember*>*  value) ;

constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Utilities::ReflectionMember*>* __get__Members_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Utilities::ReflectionMember*>*> __get__Members_k__BackingField() const;

/// @brief Method get_Creator addr 0x265a778 size 0x8 virtual false final false
inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_Creator() ;

/// @brief Method set_Creator addr 0x265a780 size 0x8 virtual false final false
inline void set_Creator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*  value) ;

/// @brief Method get_Members addr 0x265a788 size 0x8 virtual false final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Utilities::ReflectionMember*>* get_Members() ;

/// @brief Method set_Members addr 0x265a790 size 0x8 virtual false final false
inline void set_Members(::System::Collections::Generic::IDictionary_2<::StringW,::Newtonsoft::Json::Utilities::ReflectionMember*>*  value) ;

static inline ::Newtonsoft::Json::Utilities::ReflectionObject* New_ctor() ;

/// @brief Method .ctor addr 0x265a798 size 0x80 virtual false final false
inline void _ctor() ;

/// @brief Method GetValue addr 0x265a818 size 0xd4 virtual false final false
inline ::System::Object* GetValue(::System::Object*  target, ::StringW  member) ;

/// @brief Method SetValue addr 0x265a8ec size 0xdc virtual false final false
inline void SetValue(::System::Object*  target, ::StringW  member, ::System::Object*  value) ;

/// @brief Method GetType addr 0x265a9c8 size 0xb4 virtual false final false
inline ::System::Type* GetType(::StringW  member) ;

/// @brief Method Create addr 0x265aa7c size 0xc virtual false final false
static inline ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type*  t, ::ArrayW<::StringW,::Array<::StringW>*>  memberNames) ;

/// @brief Method Create addr 0x265aa88 size 0x874 virtual false final false
static inline ::Newtonsoft::Json::Utilities::ReflectionObject* Create(::System::Type*  t, ::System::Reflection::MethodBase*  creator, ::ArrayW<::StringW,::Array<::StringW>*>  memberNames) ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionObject", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionObject(ReflectionObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionObject", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionObject(ReflectionObject const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectionObject()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ReflectionObject, 0x20>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionObject);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionObject*, "Newtonsoft.Json.Utilities", "ReflectionObject");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_0*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass13_0");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_1*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass13_1");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::__ReflectionObject____c__DisplayClass13_2*, "Newtonsoft.Json.Utilities", "ReflectionObject/<>c__DisplayClass13_2");
