#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorDynamicContext)
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorDynamicContext;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorDynamicContext);
// Type: Zenject::SubContainerCreatorDynamicContext
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11295))
// CS Name: ::Zenject::SubContainerCreatorDynamicContext*
class CORDL_TYPE SubContainerCreatorDynamicContext : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

 __declspec(property(get=get_Container)) ::Zenject::DiContainer*  Container;

/// @brief Convert operator to "::Zenject::ISubContainerCreator"
constexpr operator  ::Zenject::ISubContainerCreator*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

static inline ::Zenject::SubContainerCreatorDynamicContext* New_ctor(::Zenject::DiContainer*  container) ;

/// @brief Method .ctor addr 0x2f0b8cc size 0x28 virtual false final false
inline void _ctor(::Zenject::DiContainer*  container) ;

/// @brief Method get_Container addr 0x2f0d594 size 0x8 virtual false final false
inline ::Zenject::DiContainer* get_Container() ;

/// @brief Method CreateSubContainer addr 0x2f0d59c size 0xe4 virtual true final true
inline ::Zenject::DiContainer* CreateSubContainer(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::InjectContext*  parentContext) ;

/// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ::Zenject::GameObjectContext*  context) ;

/// @brief Method CreateGameObject addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::GameObject* CreateGameObject(ByRef<bool>  shouldMakeActive) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorDynamicContext", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerCreatorDynamicContext(SubContainerCreatorDynamicContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorDynamicContext", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerCreatorDynamicContext(SubContainerCreatorDynamicContext const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerCreatorDynamicContext()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorDynamicContext, 0x18>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorDynamicContext);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorDynamicContext*, "Zenject", "SubContainerCreatorDynamicContext");
