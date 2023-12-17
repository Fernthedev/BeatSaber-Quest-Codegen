#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__AddToGameObjectComponentProviderBase_def.hpp"
CORDL_MODULE_EXPORT(AddToExistingGameObjectComponentProvider)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Type;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
class AddToExistingGameObjectComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::AddToExistingGameObjectComponentProvider);
// Type: Zenject::AddToExistingGameObjectComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11182))
// CS Name: ::Zenject::AddToExistingGameObjectComponentProvider*
class CORDL_TYPE AddToExistingGameObjectComponentProvider : public ::Zenject::AddToGameObjectComponentProviderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::AddToGameObjectComponentProviderBase)]{};

/// @brief Field _gameObject offset 0x38
 __declspec(property(get=__get__gameObject, put=__set__gameObject)) ::UnityEngine::GameObject*  _gameObject;

 __declspec(property(get=get_ShouldToggleActive)) bool  ShouldToggleActive;

constexpr void __set__gameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__gameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__gameObject() const;

static inline ::Zenject::AddToExistingGameObjectComponentProvider* New_ctor(::UnityEngine::GameObject*  gameObject, ::Zenject::DiContainer*  container, ::System::Type*  componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArguments, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback) ;

/// @brief Method .ctor addr 0x2f06288 size 0x38 virtual false final false
inline void _ctor(::UnityEngine::GameObject*  gameObject, ::Zenject::DiContainer*  container, ::System::Type*  componentType, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArguments, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback) ;

/// @brief Method get_ShouldToggleActive addr 0x2f063a0 size 0x8 virtual true final false
inline bool get_ShouldToggleActive() ;

/// @brief Method GetGameObject addr 0x2f063a8 size 0x8 virtual true final false
inline ::UnityEngine::GameObject* GetGameObject(::Zenject::InjectContext*  context) ;

// Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AddToExistingGameObjectComponentProvider(AddToExistingGameObjectComponentProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddToExistingGameObjectComponentProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddToExistingGameObjectComponentProvider(AddToExistingGameObjectComponentProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AddToExistingGameObjectComponentProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::AddToExistingGameObjectComponentProvider, 0x40>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::AddToExistingGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::AddToExistingGameObjectComponentProvider*, "Zenject", "AddToExistingGameObjectComponentProvider");
