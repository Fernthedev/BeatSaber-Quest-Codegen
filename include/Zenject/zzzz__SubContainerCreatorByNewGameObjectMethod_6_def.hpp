#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewGameObjectMethod_6)
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
class __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class Action_7;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
class SubContainerCreatorByNewGameObjectMethod_6;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
class __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6>
class SubContainerCreatorByNewGameObjectMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6>
class __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByNewGameObjectMethod_6);
MARK_GEN_REF_PTR_T(::Zenject::__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass2_0
// Type: Zenject::SubContainerCreatorByNewGameObjectMethod`6
// Type: ::<>c__DisplayClass2_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11269)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11269), inst: 6126 })
// CS Name: ::SubContainerCreatorByNewGameObjectMethod`6::<>c__DisplayClass2_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*
class CORDL_TYPE __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*  __4__this;

/// @brief Field args offset 0x18
 __declspec(property(get=__get_args, put=__set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args;

constexpr void __set___4__this(::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*  value) ;

constexpr ::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*> __get___4__this() const;

constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* __get_args() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> __get_args() const;

static inline ::Zenject::__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <AddInstallers>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _AddInstallers_b__0(::Zenject::DiContainer*  subContainer) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0(__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0(__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewGameObjectMethod`6
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11255)), TypeDefinitionIndex(TypeDefinitionIndex(11270))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11270), inst: 6126 })
// CS Name: ::Zenject::SubContainerCreatorByNewGameObjectMethod`6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*
class CORDL_TYPE SubContainerCreatorByNewGameObjectMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6> : public ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
public:
// Declarations
using __c__DisplayClass2_0 = ::Zenject::__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::SubContainerCreatorByNewGameObjectDynamicContext)]{};

/// @brief Field _installerMethod offset 0x20
 __declspec(property(get=__get__installerMethod, put=__set__installerMethod)) ::System::Action_7<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*  _installerMethod;

constexpr void __set__installerMethod(::System::Action_7<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*  value) ;

constexpr ::System::Action_7<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>* __get__installerMethod() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_7<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*> __get__installerMethod() const;

static inline ::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Action_7<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*  installerMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Action_7<::Zenject::DiContainer*,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*  installerMethod) ;

/// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::GameObjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod_6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByNewGameObjectMethod_6(SubContainerCreatorByNewGameObjectMethod_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod_6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByNewGameObjectMethod_6(SubContainerCreatorByNewGameObjectMethod_6 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByNewGameObjectMethod_6()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByNewGameObjectMethod_6, "Zenject", "SubContainerCreatorByNewGameObjectMethod`6");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0, "Zenject", "SubContainerCreatorByNewGameObjectMethod`6/<>c__DisplayClass2_0");
