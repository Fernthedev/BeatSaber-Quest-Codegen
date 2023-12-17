#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PrefabProvider)
namespace Zenject {
class IPrefabProvider;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Zenject {
class PrefabProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PrefabProvider);
// Type: Zenject::PrefabProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11232))
// CS Name: ::Zenject::PrefabProvider*
class CORDL_TYPE PrefabProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _prefab offset 0x10
 __declspec(property(get=__get__prefab, put=__set__prefab)) ::UnityEngine::Object*  _prefab;

/// @brief Convert operator to "::Zenject::IPrefabProvider"
constexpr operator  ::Zenject::IPrefabProvider*() noexcept;

constexpr void __set__prefab(::UnityEngine::Object*  value) ;

constexpr ::UnityEngine::Object* __get__prefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> __get__prefab() const;

static inline ::Zenject::PrefabProvider* New_ctor(::UnityEngine::Object*  prefab) ;

/// @brief Method .ctor addr 0x2f09c00 size 0x34 virtual false final false
inline void _ctor(::UnityEngine::Object*  prefab) ;

/// @brief Method GetPrefab addr 0x2f09c34 size 0x8 virtual true final true
inline ::UnityEngine::Object* GetPrefab() ;

// Ctor Parameters [CppParam { name: "", ty: "PrefabProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PrefabProvider(PrefabProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrefabProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrefabProvider(PrefabProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PrefabProvider()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PrefabProvider, 0x18>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::PrefabProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabProvider*, "Zenject", "PrefabProvider");
