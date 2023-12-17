#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabMethod_2)
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
template<typename TParam1,typename TParam2>
class __SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2>
class SubContainerCreatorByNewPrefabMethod_2;
}
namespace Zenject {
template<typename TParam1,typename TParam2>
class __SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2>
class SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2>
class SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2>
class __SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1,TParam2>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2>
class __SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1,TParam2>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabMethod_2);
MARK_GEN_REF_PTR_T(::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass2_0
// Type: Zenject::SubContainerCreatorByNewPrefabMethod`2
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11280)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11280), inst: 1630 })
// CS Name: ::SubContainerCreatorByNewPrefabMethod`2::<>c__DisplayClass2_0<TParam1,TParam2>*
class CORDL_TYPE __SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1,TParam2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>*  __4__this;

/// @brief Field args offset 0x18
 __declspec(property(get=__get_args, put=__set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args;

constexpr void __set___4__this(::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>*  value) ;

constexpr ::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>*> __get___4__this() const;

constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* __get_args() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> __get_args() const;

static inline ::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1,TParam2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <AddInstallers>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _AddInstallers_b__0(::Zenject::DiContainer*  subContainer) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0(__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0(__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11280)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11280), inst: 81 })
// CS Name: ::SubContainerCreatorByNewPrefabMethod`2::<>c__DisplayClass2_0<TParam1,TParam2>*
class CORDL_TYPE __SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1,TParam2> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>*  __4__this;

/// @brief Field args offset 0x18
 __declspec(property(get=__get_args, put=__set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args;

constexpr void __set___4__this(::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>*  value) ;

constexpr ::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>*> __get___4__this() const;

constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* __get_args() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> __get_args() const;

static inline ::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1,TParam2>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <AddInstallers>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _AddInstallers_b__0(::Zenject::DiContainer*  subContainer) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0(__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0(__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabMethod`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::cordl_internals::is_or_is_backed_by<int32_t> TParam2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11274)), TypeDefinitionIndex(TypeDefinitionIndex(11281))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11281), inst: 1630 })
// CS Name: ::Zenject::SubContainerCreatorByNewPrefabMethod`2<TParam1,TParam2>*
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2> : public ::Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
// Declarations
using __c__DisplayClass2_0 = ::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::SubContainerCreatorByNewPrefabDynamicContext)]{};

/// @brief Field _installerMethod offset 0x28
 __declspec(property(get=__get__installerMethod, put=__set__installerMethod)) ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  _installerMethod;

constexpr void __set__installerMethod(::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  value) ;

constexpr ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>* __get__installerMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*> __get__installerMethod() const;

static inline ::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installerMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installerMethod) ;

/// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::GameObjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByNewPrefabMethod_2(SubContainerCreatorByNewPrefabMethod_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByNewPrefabMethod_2(SubContainerCreatorByNewPrefabMethod_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByNewPrefabMethod_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabMethod`2
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11274)), TypeDefinitionIndex(TypeDefinitionIndex(11281))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11281), inst: 81 })
// CS Name: ::Zenject::SubContainerCreatorByNewPrefabMethod`2<TParam1,TParam2>*
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2> : public ::Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
// Declarations
using __c__DisplayClass2_0 = ::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0<TParam1, TParam2>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::SubContainerCreatorByNewPrefabDynamicContext)]{};

/// @brief Field _installerMethod offset 0x28
 __declspec(property(get=__get__installerMethod, put=__set__installerMethod)) ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  _installerMethod;

constexpr void __set__installerMethod(::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  value) ;

constexpr ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>* __get__installerMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*> __get__installerMethod() const;

static inline ::Zenject::SubContainerCreatorByNewPrefabMethod_2<TParam1,TParam2>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installerMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Action_3<::Zenject::DiContainer*,TParam1,TParam2>*  installerMethod) ;

/// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::GameObjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByNewPrefabMethod_2(SubContainerCreatorByNewPrefabMethod_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByNewPrefabMethod_2(SubContainerCreatorByNewPrefabMethod_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByNewPrefabMethod_2()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByNewPrefabMethod_2, "Zenject", "SubContainerCreatorByNewPrefabMethod`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__SubContainerCreatorByNewPrefabMethod_2____c__DisplayClass2_0, "Zenject", "SubContainerCreatorByNewPrefabMethod`2/<>c__DisplayClass2_0");
