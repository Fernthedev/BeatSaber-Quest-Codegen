#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(EmptyGameObjectProvider)
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Action;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class EmptyGameObjectProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::EmptyGameObjectProvider);
// Type: Zenject::EmptyGameObjectProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11191))
// CS Name: ::Zenject::EmptyGameObjectProvider*
class CORDL_TYPE EmptyGameObjectProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _gameObjectBindInfo offset 0x18
 __declspec(property(get=__get__gameObjectBindInfo, put=__set__gameObjectBindInfo)) ::Zenject::GameObjectCreationParameters*  _gameObjectBindInfo;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__gameObjectBindInfo(::Zenject::GameObjectCreationParameters*  value) ;

constexpr ::Zenject::GameObjectCreationParameters* __get__gameObjectBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> __get__gameObjectBindInfo() const;

static inline ::Zenject::EmptyGameObjectProvider* New_ctor(::Zenject::DiContainer*  container, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo) ;

/// @brief Method .ctor addr 0x2f075ec size 0x2c virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::GameObjectCreationParameters*  gameObjectBindInfo) ;

/// @brief Method get_IsCached addr 0x2f07618 size 0x8 virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f07620 size 0x8 virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2f07628 size 0x6c virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2f07694 size 0x108 virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "EmptyGameObjectProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyGameObjectProvider(EmptyGameObjectProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyGameObjectProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyGameObjectProvider(EmptyGameObjectProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EmptyGameObjectProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::EmptyGameObjectProvider, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::EmptyGameObjectProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::EmptyGameObjectProvider*, "Zenject", "EmptyGameObjectProvider");
