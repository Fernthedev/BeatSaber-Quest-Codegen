#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PrefabInstantiatorCached)
namespace Zenject {
class IPrefabInstantiator;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class GameObject;
}
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
namespace System {
class Type;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
class PrefabInstantiatorCached;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabInstantiatorCached);
// Type: Zenject::PrefabInstantiatorCached
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11230))
// CS Name: ::Zenject::PrefabInstantiatorCached*
class CORDL_TYPE PrefabInstantiatorCached : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _subInstantiator offset 0x10
 __declspec(property(get=__get__subInstantiator, put=__set__subInstantiator)) ::Zenject::IPrefabInstantiator*  _subInstantiator;

/// @brief Field _gameObject offset 0x18
 __declspec(property(get=__get__gameObject, put=__set__gameObject)) ::UnityEngine::GameObject*  _gameObject;

 __declspec(property(get=get_ExtraArguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  ExtraArguments;

 __declspec(property(get=get_ArgumentTarget)) ::System::Type*  ArgumentTarget;

 __declspec(property(get=get_GameObjectCreationParameters)) ::Zenject::GameObjectCreationParameters*  GameObjectCreationParameters;

/// @brief Convert operator to "::Zenject::IPrefabInstantiator"
constexpr operator  ::Zenject::IPrefabInstantiator*() noexcept;

constexpr void __set__subInstantiator(::Zenject::IPrefabInstantiator*  value) ;

constexpr ::Zenject::IPrefabInstantiator* __get__subInstantiator() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabInstantiator*> __get__subInstantiator() const;

constexpr void __set__gameObject(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__gameObject() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__gameObject() const;

static inline ::Zenject::PrefabInstantiatorCached* New_ctor(::Zenject::IPrefabInstantiator*  subInstantiator) ;

/// @brief Method .ctor addr 0x2f097d0 size 0x28 virtual false final false
inline void _ctor(::Zenject::IPrefabInstantiator*  subInstantiator) ;

/// @brief Method get_ExtraArguments addr 0x2f097f8 size 0xa4 virtual true final true
inline ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* get_ExtraArguments() ;

/// @brief Method get_ArgumentTarget addr 0x2f0989c size 0xa0 virtual true final true
inline ::System::Type* get_ArgumentTarget() ;

/// @brief Method get_GameObjectCreationParameters addr 0x2f0993c size 0xa4 virtual true final true
inline ::Zenject::GameObjectCreationParameters* get_GameObjectCreationParameters() ;

/// @brief Method GetPrefab addr 0x2f099e0 size 0xa4 virtual true final true
inline ::UnityEngine::Object* GetPrefab() ;

/// @brief Method Instantiate addr 0x2f09a84 size 0x17c virtual true final true
inline ::UnityEngine::GameObject* Instantiate(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction) ;

// Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiatorCached", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrefabInstantiatorCached(PrefabInstantiatorCached && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrefabInstantiatorCached", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrefabInstantiatorCached(PrefabInstantiatorCached const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PrefabInstantiatorCached()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabInstantiatorCached, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::PrefabInstantiatorCached);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabInstantiatorCached*, "Zenject", "PrefabInstantiatorCached");
