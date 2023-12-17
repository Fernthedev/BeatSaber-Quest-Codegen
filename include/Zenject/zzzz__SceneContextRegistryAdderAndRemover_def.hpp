#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SceneContextRegistryAdderAndRemover)
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SceneContext;
}
namespace System {
class Object;
}
namespace Zenject {
class IInitializable;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class SceneContextRegistry;
}
// Forward declare root types
namespace Zenject {
class SceneContextRegistryAdderAndRemover;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SceneContextRegistryAdderAndRemover);
// Type: Zenject::SceneContextRegistryAdderAndRemover
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11333))
// CS Name: ::Zenject::SceneContextRegistryAdderAndRemover*
class CORDL_TYPE SceneContextRegistryAdderAndRemover : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _registry offset 0x10
 __declspec(property(get=__get__registry, put=__set__registry)) ::Zenject::SceneContextRegistry*  _registry;

/// @brief Field _sceneContext offset 0x18
 __declspec(property(get=__get__sceneContext, put=__set__sceneContext)) ::Zenject::SceneContext*  _sceneContext;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__registry(::Zenject::SceneContextRegistry*  value) ;

constexpr ::Zenject::SceneContextRegistry* __get__registry() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContextRegistry*> __get__registry() const;

constexpr void __set__sceneContext(::Zenject::SceneContext*  value) ;

constexpr ::Zenject::SceneContext* __get__sceneContext() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContext*> __get__sceneContext() const;

static inline ::Zenject::SceneContextRegistryAdderAndRemover* New_ctor(::Zenject::SceneContext*  sceneContext, ::Zenject::SceneContextRegistry*  registry) ;

/// @brief Method .ctor addr 0x2f18998 size 0x2c virtual false final false
inline void _ctor(::Zenject::SceneContext*  sceneContext, ::Zenject::SceneContextRegistry*  registry) ;

/// @brief Method Initialize addr 0x2f189c4 size 0x20 virtual true final true
inline void Initialize() ;

/// @brief Method Dispose addr 0x2f189e4 size 0x20 virtual true final true
inline void Dispose() ;

/// @brief Method __zenCreate addr 0x2f18a04 size 0x11c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f18b20 size 0x304 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistryAdderAndRemover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneContextRegistryAdderAndRemover(SceneContextRegistryAdderAndRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistryAdderAndRemover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneContextRegistryAdderAndRemover(SceneContextRegistryAdderAndRemover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SceneContextRegistryAdderAndRemover()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SceneContextRegistryAdderAndRemover, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SceneContextRegistryAdderAndRemover);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SceneContextRegistryAdderAndRemover*, "Zenject", "SceneContextRegistryAdderAndRemover");
