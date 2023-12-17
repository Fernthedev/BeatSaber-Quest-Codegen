#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionTypeAnalyzer)
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectFieldInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectParameterInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace Zenject {
class InjectableInfo;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass6_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass5_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace Zenject::Internal {
class ReflectionTypeInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectMethodInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectConstructorInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass5_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass8_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass11_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass6_1;
}
namespace System {
class Type;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass7_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass7_0;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectPropertyInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace Zenject::Internal {
class ReflectionTypeAnalyzer;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass11_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass5_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass5_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass6_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass6_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass7_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass7_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass5_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11385))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass5_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f25e94 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetPropertyInfos>b__1 addr 0x2f25e9c size 0xb4 virtual false final false
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo* _GetPropertyInfos_b__1(::System::Reflection::PropertyInfo*  x) ;

/// @brief Method __zenCreate addr 0x2f25f50 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f25fac size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionTypeAnalyzer____c__DisplayClass5_0(__ReflectionTypeAnalyzer____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionTypeAnalyzer____c__DisplayClass5_0(__ReflectionTypeAnalyzer____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionTypeAnalyzer____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass5_1
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11386))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass5_1*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass5_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field x offset 0x10
 __declspec(property(get=__get_x, put=__set_x)) ::System::Reflection::PropertyInfo*  x;

constexpr void __set_x(::System::Reflection::PropertyInfo*  value) ;

constexpr ::System::Reflection::PropertyInfo* __get_x() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> __get_x() const;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1* New_ctor() ;

/// @brief Method .ctor addr 0x2f2616c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetPropertyInfos>b__2 addr 0x2f26174 size 0xcc virtual false final false
inline bool _GetPropertyInfos_b__2(::System::Type*  a) ;

/// @brief Method __zenCreate addr 0x2f26240 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f2629c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionTypeAnalyzer____c__DisplayClass5_1(__ReflectionTypeAnalyzer____c__DisplayClass5_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass5_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionTypeAnalyzer____c__DisplayClass5_1(__ReflectionTypeAnalyzer____c__DisplayClass5_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionTypeAnalyzer____c__DisplayClass5_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1, 0x18>, "Size mismatch!");

} // namespace end def Zenject::Internal
// Type: ::<>c
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11387))
// CS Name: ::ReflectionTypeAnalyzer::<>c*
class CORDL_TYPE __ReflectionTypeAnalyzer____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::Internal::__ReflectionTypeAnalyzer____c*  value) ;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c* getStaticF___9() ;

static inline void setStaticF___9__5_0(::System::Func_2<::System::Reflection::PropertyInfo*,bool>*  value) ;

static inline ::System::Func_2<::System::Reflection::PropertyInfo*,bool>* getStaticF___9__5_0() ;

static inline void setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value) ;

static inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* getStaticF___9__6_0() ;

static inline void setStaticF___9__7_0(::System::Func_2<::System::Reflection::MethodInfo*,bool>*  value) ;

static inline ::System::Func_2<::System::Reflection::MethodInfo*,bool>* getStaticF___9__7_0() ;

static inline void setStaticF___9__11_0(::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*  value) ;

static inline ::System::Func_2<::System::Reflection::ConstructorInfo*,bool>* getStaticF___9__11_0() ;

static inline void setStaticF___9__11_1(::System::Func_2<::System::Reflection::ConstructorInfo*,bool>*  value) ;

static inline ::System::Func_2<::System::Reflection::ConstructorInfo*,bool>* getStaticF___9__11_1() ;

static inline void setStaticF___9__11_2(::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>*  value) ;

static inline ::System::Func_2<::System::Reflection::ConstructorInfo*,int32_t>* getStaticF___9__11_2() ;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c* New_ctor() ;

/// @brief Method .ctor addr 0x2f264c0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetPropertyInfos>b__5_0 addr 0x2f264c8 size 0x100 virtual false final false
inline bool _GetPropertyInfos_b__5_0(::System::Reflection::PropertyInfo*  x) ;

/// @brief Method <GetFieldInfos>b__6_0 addr 0x2f265c8 size 0x100 virtual false final false
inline bool _GetFieldInfos_b__6_0(::System::Reflection::FieldInfo*  x) ;

/// @brief Method <GetMethodInfos>b__7_0 addr 0x2f266d0 size 0x100 virtual false final false
inline bool _GetMethodInfos_b__7_0(::System::Reflection::MethodInfo*  x) ;

/// @brief Method <TryGetInjectConstructor>b__11_0 addr 0x2f267d8 size 0x100 virtual false final false
inline bool _TryGetInjectConstructor_b__11_0(::System::Reflection::ConstructorInfo*  c) ;

/// @brief Method <TryGetInjectConstructor>b__11_1 addr 0x2f268e0 size 0x18 virtual false final false
inline bool _TryGetInjectConstructor_b__11_1(::System::Reflection::ConstructorInfo*  x) ;

/// @brief Method <TryGetInjectConstructor>b__11_2 addr 0x2f268f8 size 0x60 virtual false final false
inline int32_t _TryGetInjectConstructor_b__11_2(::System::Reflection::ConstructorInfo*  x) ;

/// @brief Method __zenCreate addr 0x2f26958 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f269b4 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionTypeAnalyzer____c(__ReflectionTypeAnalyzer____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionTypeAnalyzer____c(__ReflectionTypeAnalyzer____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionTypeAnalyzer____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__5_0

// Static field <>9__6_0

// Static field <>9__7_0

// Static field <>9__11_0

// Static field <>9__11_1

// Static field <>9__11_2


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c, 0x10>, "Size mismatch!");

} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass6_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11388))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass6_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f26b74 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetFieldInfos>b__1 addr 0x2f26b7c size 0xb4 virtual false final false
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo* _GetFieldInfos_b__1(::System::Reflection::FieldInfo*  x) ;

/// @brief Method __zenCreate addr 0x2f26c30 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f26c8c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionTypeAnalyzer____c__DisplayClass6_0(__ReflectionTypeAnalyzer____c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionTypeAnalyzer____c__DisplayClass6_0(__ReflectionTypeAnalyzer____c__DisplayClass6_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionTypeAnalyzer____c__DisplayClass6_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass6_1
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11389))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass6_1*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass6_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field x offset 0x10
 __declspec(property(get=__get_x, put=__set_x)) ::System::Reflection::FieldInfo*  x;

constexpr void __set_x(::System::Reflection::FieldInfo*  value) ;

constexpr ::System::Reflection::FieldInfo* __get_x() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> __get_x() const;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1* New_ctor() ;

/// @brief Method .ctor addr 0x2f266c8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetFieldInfos>b__2 addr 0x2f26e4c size 0xcc virtual false final false
inline bool _GetFieldInfos_b__2(::System::Type*  a) ;

/// @brief Method __zenCreate addr 0x2f26f18 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f26f74 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionTypeAnalyzer____c__DisplayClass6_1(__ReflectionTypeAnalyzer____c__DisplayClass6_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass6_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionTypeAnalyzer____c__DisplayClass6_1(__ReflectionTypeAnalyzer____c__DisplayClass6_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionTypeAnalyzer____c__DisplayClass6_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1, 0x18>, "Size mismatch!");

} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass7_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11390))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass7_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

/// @brief Field <>9__2 offset 0x18
 __declspec(property(get=__get___9__2, put=__set___9__2)) ::System::Func_2<::System::Reflection::ParameterInfo*,::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*  __9__2;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

constexpr void __set___9__2(::System::Func_2<::System::Reflection::ParameterInfo*,::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*  value) ;

constexpr ::System::Func_2<::System::Reflection::ParameterInfo*,::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* __get___9__2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Reflection::ParameterInfo*,::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*> __get___9__2() const;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f27134 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetMethodInfos>b__2 addr 0x2f2713c size 0x6c virtual false final false
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* _GetMethodInfos_b__2(::System::Reflection::ParameterInfo*  x) ;

/// @brief Method __zenCreate addr 0x2f271a8 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f27204 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionTypeAnalyzer____c__DisplayClass7_0(__ReflectionTypeAnalyzer____c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionTypeAnalyzer____c__DisplayClass7_0(__ReflectionTypeAnalyzer____c__DisplayClass7_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionTypeAnalyzer____c__DisplayClass7_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass7_1
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11391))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass7_1*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass7_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field x offset 0x10
 __declspec(property(get=__get_x, put=__set_x)) ::System::Reflection::MethodInfo*  x;

constexpr void __set_x(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_x() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_x() const;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1* New_ctor() ;

/// @brief Method .ctor addr 0x2f267d0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetMethodInfos>b__1 addr 0x2f273c4 size 0x6c virtual false final false
inline bool _GetMethodInfos_b__1(::System::Type*  a) ;

/// @brief Method __zenCreate addr 0x2f27430 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f2748c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass7_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionTypeAnalyzer____c__DisplayClass7_1(__ReflectionTypeAnalyzer____c__DisplayClass7_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass7_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionTypeAnalyzer____c__DisplayClass7_1(__ReflectionTypeAnalyzer____c__DisplayClass7_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionTypeAnalyzer____c__DisplayClass7_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1, 0x18>, "Size mismatch!");

} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass8_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11392))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass8_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f2764c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetConstructorInfo>b__0 addr 0x2f27654 size 0x6c virtual false final false
inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* _GetConstructorInfo_b__0(::System::Reflection::ParameterInfo*  x) ;

/// @brief Method __zenCreate addr 0x2f276c0 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f2771c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionTypeAnalyzer____c__DisplayClass8_0(__ReflectionTypeAnalyzer____c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionTypeAnalyzer____c__DisplayClass8_0(__ReflectionTypeAnalyzer____c__DisplayClass8_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionTypeAnalyzer____c__DisplayClass8_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject::Internal
// Type: ::<>c__DisplayClass11_0
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11393))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass11_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass11_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field c offset 0x10
 __declspec(property(get=__get_c, put=__set_c)) ::System::Reflection::ConstructorInfo*  c;

constexpr void __set_c(::System::Reflection::ConstructorInfo*  value) ;

constexpr ::System::Reflection::ConstructorInfo* __get_c() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> __get_c() const;

static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f268d8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <TryGetInjectConstructor>b__3 addr 0x2f278dc size 0xcc virtual false final false
inline bool _TryGetInjectConstructor_b__3(::System::Type*  a) ;

/// @brief Method __zenCreate addr 0x2f279a8 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f27a04 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ReflectionTypeAnalyzer____c__DisplayClass11_0(__ReflectionTypeAnalyzer____c__DisplayClass11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ReflectionTypeAnalyzer____c__DisplayClass11_0(__ReflectionTypeAnalyzer____c__DisplayClass11_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ReflectionTypeAnalyzer____c__DisplayClass11_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject::Internal
// Type: Zenject.Internal::ReflectionTypeAnalyzer
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11394))
// CS Name: ::Zenject.Internal::ReflectionTypeAnalyzer*
class CORDL_TYPE ReflectionTypeAnalyzer : public ::System::Object {
public:
// Declarations
using __c__DisplayClass11_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0;

using __c__DisplayClass8_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0;

using __c__DisplayClass7_1 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1;

using __c__DisplayClass7_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0;

using __c__DisplayClass6_1 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1;

using __c__DisplayClass6_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0;

using __c = ::Zenject::Internal::__ReflectionTypeAnalyzer____c;

using __c__DisplayClass5_1 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1;

using __c__DisplayClass5_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__injectAttributeTypes(::System::Collections::Generic::HashSet_1<::System::Type*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Type*>* getStaticF__injectAttributeTypes() ;

/// @brief Method AddCustomInjectAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void AddCustomInjectAttribute() ;

/// @brief Method AddCustomInjectAttribute addr 0x2f23b28 size 0xd0 virtual false final false
static inline void AddCustomInjectAttribute(::System::Type*  type) ;

/// @brief Method GetReflectionInfo addr 0x2f1f0e4 size 0x1e4 virtual false final false
static inline ::Zenject::Internal::ReflectionTypeInfo* GetReflectionInfo(::System::Type*  type) ;

/// @brief Method GetPropertyInfos addr 0x2f24428 size 0x1f4 virtual false final false
static inline ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* GetPropertyInfos(::System::Type*  type) ;

/// @brief Method GetFieldInfos addr 0x2f24234 size 0x1f4 virtual false final false
static inline ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* GetFieldInfos(::System::Type*  type) ;

/// @brief Method GetMethodInfos addr 0x2f23dfc size 0x438 virtual false final false
static inline ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* GetMethodInfos(::System::Type*  type) ;

/// @brief Method GetConstructorInfo addr 0x2f23bf8 size 0x204 virtual false final false
static inline ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* GetConstructorInfo(::System::Type*  type) ;

/// @brief Method CreateInjectableInfoForParam addr 0x2f24a20 size 0x22c virtual false final false
static inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* CreateInjectableInfoForParam(::System::Type*  parentType, ::System::Reflection::ParameterInfo*  paramInfo) ;

/// @brief Method GetInjectableInfoForMember addr 0x2f24c4c size 0x1248 virtual false final false
static inline ::Zenject::InjectableInfo* GetInjectableInfoForMember(::System::Type*  parentType, ::System::Reflection::MemberInfo*  memInfo) ;

/// @brief Method TryGetInjectConstructor addr 0x2f2461c size 0x404 virtual false final false
static inline ::System::Reflection::ConstructorInfo* TryGetInjectConstructor(::System::Type*  type) ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionTypeAnalyzer(ReflectionTypeAnalyzer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionTypeAnalyzer(ReflectionTypeAnalyzer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectionTypeAnalyzer()  = default;
public:


// Fields

// Static field _injectAttributeTypes


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer, 0x10>, "Size mismatch!");

} // namespace end def Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer*, "Zenject.Internal", "ReflectionTypeAnalyzer");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass11_0");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_1");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_0");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_1");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass8_0");
