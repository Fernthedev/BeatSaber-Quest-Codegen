#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabInstaller)
namespace System {
class Type;
}
namespace Zenject {
class __SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class IPrefabProvider;
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
class SubContainerCreatorByNewPrefabInstaller;
}
namespace Zenject {
class __SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabInstaller);
MARK_REF_PTR_T(::Zenject::__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11275))
// CS Name: ::SubContainerCreatorByNewPrefabInstaller::<>c__DisplayClass3_0*
class CORDL_TYPE __SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::SubContainerCreatorByNewPrefabInstaller*  __4__this;

/// @brief Field args offset 0x18
 __declspec(property(get=__get_args, put=__set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args;

constexpr void __set___4__this(::Zenject::SubContainerCreatorByNewPrefabInstaller*  value) ;

constexpr ::Zenject::SubContainerCreatorByNewPrefabInstaller* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorByNewPrefabInstaller*> __get___4__this() const;

constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* __get_args() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> __get_args() const;

static inline ::Zenject::__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f0c594 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <AddInstallers>b__0 addr 0x2f0c59c size 0x178 virtual false final false
inline void _AddInstallers_b__0(::Zenject::DiContainer*  subContainer) ;

/// @brief Method __zenCreate addr 0x2f0c714 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f0c770 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0(__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0(__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabInstaller
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11274))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11276))
// CS Name: ::Zenject::SubContainerCreatorByNewPrefabInstaller*
class CORDL_TYPE SubContainerCreatorByNewPrefabInstaller : public ::Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
// Declarations
using __c__DisplayClass3_0 = ::Zenject::__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::SubContainerCreatorByNewPrefabDynamicContext)]{};

/// @brief Field _installerType offset 0x28
 __declspec(property(get=__get__installerType, put=__set__installerType)) ::System::Type*  _installerType;

/// @brief Field _extraArgs offset 0x30
 __declspec(property(get=__get__extraArgs, put=__set__extraArgs)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  _extraArgs;

constexpr void __set__installerType(::System::Type*  value) ;

constexpr ::System::Type* __get__installerType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__installerType() const;

constexpr void __set__extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* __get__extraArgs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> __get__extraArgs() const;

static inline ::Zenject::SubContainerCreatorByNewPrefabInstaller* New_ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Type*  installerType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  extraArgs) ;

/// @brief Method .ctor addr 0x2f0c3c8 size 0xd8 virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::IPrefabProvider*  prefabProvider, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo, ::System::Type*  installerType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  extraArgs) ;

/// @brief Method AddInstallers addr 0x2f0c4a0 size 0xf4 virtual true final false
inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::GameObjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorByNewPrefabInstaller(SubContainerCreatorByNewPrefabInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorByNewPrefabInstaller(SubContainerCreatorByNewPrefabInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorByNewPrefabInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewPrefabInstaller, 0x38>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewPrefabInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewPrefabInstaller*, "Zenject", "SubContainerCreatorByNewPrefabInstaller");
NEED_NO_BOX(::Zenject::__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerCreatorByNewPrefabInstaller____c__DisplayClass3_0*, "Zenject", "SubContainerCreatorByNewPrefabInstaller/<>c__DisplayClass3_0");
