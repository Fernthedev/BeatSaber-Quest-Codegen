#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ConventionAssemblySelectionBinder)
namespace Zenject {
class __ConventionAssemblySelectionBinder____c;
}
namespace Zenject {
class __ConventionAssemblySelectionBinder____c__DisplayClass12_0;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace Zenject {
class ConventionBindInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ConventionAssemblySelectionBinder;
}
namespace Zenject {
class __ConventionAssemblySelectionBinder____c;
}
namespace Zenject {
class __ConventionAssemblySelectionBinder____c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConventionAssemblySelectionBinder);
MARK_REF_PTR_T(::Zenject::__ConventionAssemblySelectionBinder____c);
MARK_REF_PTR_T(::Zenject::__ConventionAssemblySelectionBinder____c__DisplayClass12_0);
// Type: ::<>c
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10682))
// CS Name: ::ConventionAssemblySelectionBinder::<>c*
class CORDL_TYPE __ConventionAssemblySelectionBinder____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Zenject::__ConventionAssemblySelectionBinder____c*  value) ;

static inline ::Zenject::__ConventionAssemblySelectionBinder____c* getStaticF___9() ;

static inline void setStaticF___9__8_0(::System::Func_2<::System::Type*,::System::Reflection::Assembly*>*  value) ;

static inline ::System::Func_2<::System::Type*,::System::Reflection::Assembly*>* getStaticF___9__8_0() ;

static inline ::Zenject::__ConventionAssemblySelectionBinder____c* New_ctor() ;

/// @brief Method .ctor addr 0x2ec82a4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FromAssembliesContaining>b__8_0 addr 0x2ec82ac size 0x24 virtual false final false
inline ::System::Reflection::Assembly* _FromAssembliesContaining_b__8_0(::System::Type*  t) ;

/// @brief Method __zenCreate addr 0x2ec82d0 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ec832c size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ConventionAssemblySelectionBinder____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConventionAssemblySelectionBinder____c(__ConventionAssemblySelectionBinder____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConventionAssemblySelectionBinder____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConventionAssemblySelectionBinder____c(__ConventionAssemblySelectionBinder____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConventionAssemblySelectionBinder____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__8_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionAssemblySelectionBinder____c, 0x10>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::<>c__DisplayClass12_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10683))
// CS Name: ::ConventionAssemblySelectionBinder::<>c__DisplayClass12_0*
class CORDL_TYPE __ConventionAssemblySelectionBinder____c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field assemblies offset 0x10
 __declspec(property(get=__get_assemblies, put=__set_assemblies)) ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*  assemblies;

constexpr void __set_assemblies(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* __get_assemblies() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*> __get_assemblies() const;

static inline ::Zenject::__ConventionAssemblySelectionBinder____c__DisplayClass12_0* New_ctor() ;

/// @brief Method .ctor addr 0x2ec8178 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <FromAssemblies>b__0 addr 0x2ec84ec size 0x58 virtual false final false
inline bool _FromAssemblies_b__0(::System::Reflection::Assembly*  assembly) ;

/// @brief Method __zenCreate addr 0x2ec8544 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ec85a0 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ConventionAssemblySelectionBinder____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ConventionAssemblySelectionBinder____c__DisplayClass12_0(__ConventionAssemblySelectionBinder____c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ConventionAssemblySelectionBinder____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ConventionAssemblySelectionBinder____c__DisplayClass12_0(__ConventionAssemblySelectionBinder____c__DisplayClass12_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ConventionAssemblySelectionBinder____c__DisplayClass12_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionAssemblySelectionBinder____c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::ConventionAssemblySelectionBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10684))
// CS Name: ::Zenject::ConventionAssemblySelectionBinder*
class CORDL_TYPE ConventionAssemblySelectionBinder : public ::System::Object {
public:
// Declarations
using __c__DisplayClass12_0 = ::Zenject::__ConventionAssemblySelectionBinder____c__DisplayClass12_0;

using __c = ::Zenject::__ConventionAssemblySelectionBinder____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <BindInfo>k__BackingField offset 0x10
 __declspec(property(get=__get__BindInfo_k__BackingField, put=__set__BindInfo_k__BackingField)) ::Zenject::ConventionBindInfo*  _BindInfo_k__BackingField;

 __declspec(property(get=get_BindInfo, put=set_BindInfo)) ::Zenject::ConventionBindInfo*  BindInfo;

constexpr void __set__BindInfo_k__BackingField(::Zenject::ConventionBindInfo*  value) ;

constexpr ::Zenject::ConventionBindInfo* __get__BindInfo_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::ConventionBindInfo*> __get__BindInfo_k__BackingField() const;

static inline ::Zenject::ConventionAssemblySelectionBinder* New_ctor(::Zenject::ConventionBindInfo*  bindInfo) ;

/// @brief Method .ctor addr 0x2ec7e08 size 0x28 virtual false final false
inline void _ctor(::Zenject::ConventionBindInfo*  bindInfo) ;

/// @brief Method get_BindInfo addr 0x2ec7e30 size 0x8 virtual false final false
inline ::Zenject::ConventionBindInfo* get_BindInfo() ;

/// @brief Method set_BindInfo addr 0x2ec7e38 size 0x8 virtual false final false
inline void set_BindInfo(::Zenject::ConventionBindInfo*  value) ;

/// @brief Method FromAllAssemblies addr 0x2ec7e40 size 0x4 virtual false final false
inline void FromAllAssemblies() ;

/// @brief Method FromAssemblyContaining addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void FromAssemblyContaining() ;

/// @brief Method FromAssembliesContaining addr 0x2ec7e44 size 0x4 virtual false final false
inline void FromAssembliesContaining(::ArrayW<::System::Type*,::Array<::System::Type*>*>  types) ;

/// @brief Method FromAssembliesContaining addr 0x2ec7e48 size 0x128 virtual false final false
inline void FromAssembliesContaining(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  types) ;

/// @brief Method FromThisAssembly addr 0x2ec8034 size 0xa0 virtual false final false
inline void FromThisAssembly() ;

/// @brief Method FromAssembly addr 0x2ec80d8 size 0xa0 virtual false final false
inline void FromAssembly(::System::Reflection::Assembly*  assembly) ;

/// @brief Method FromAssemblies addr 0x2ec80d4 size 0x4 virtual false final false
inline void FromAssemblies(::ArrayW<::System::Reflection::Assembly*,::Array<::System::Reflection::Assembly*>*>  assemblies) ;

/// @brief Method FromAssemblies addr 0x2ec7f70 size 0xc4 virtual false final false
inline void FromAssemblies(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*  assemblies) ;

/// @brief Method FromAssembliesWhere addr 0x2ec8228 size 0x18 virtual false final false
inline void FromAssembliesWhere(::System::Func_2<::System::Reflection::Assembly*,bool>*  predicate) ;

// Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConventionAssemblySelectionBinder(ConventionAssemblySelectionBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConventionAssemblySelectionBinder(ConventionAssemblySelectionBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConventionAssemblySelectionBinder()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConventionAssemblySelectionBinder, 0x18>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ConventionAssemblySelectionBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionAssemblySelectionBinder*, "Zenject", "ConventionAssemblySelectionBinder");
NEED_NO_BOX(::Zenject::__ConventionAssemblySelectionBinder____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionAssemblySelectionBinder____c*, "Zenject", "ConventionAssemblySelectionBinder/<>c");
NEED_NO_BOX(::Zenject::__ConventionAssemblySelectionBinder____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionAssemblySelectionBinder____c__DisplayClass12_0*, "Zenject", "ConventionAssemblySelectionBinder/<>c__DisplayClass12_0");
