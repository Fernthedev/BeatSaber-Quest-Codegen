#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonoInstallerBase)
namespace Zenject {
class IInstaller;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class MonoInstallerBase;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::MonoInstallerBase);
// Type: Zenject::MonoInstallerBase
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11146))
// CS Name: ::Zenject::MonoInstallerBase*
class CORDL_TYPE MonoInstallerBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field <Container>k__BackingField offset 0x18
 __declspec(property(get=__get__Container_k__BackingField, put=__set__Container_k__BackingField)) ::Zenject::DiContainer*  _Container_k__BackingField;

 __declspec(property(get=get_Container, put=set_Container)) ::Zenject::DiContainer*  Container;

 __declspec(property(get=get_IsEnabled)) bool  IsEnabled;

/// @brief Convert operator to "::Zenject::IInstaller"
constexpr operator  ::Zenject::IInstaller*() noexcept;

constexpr void __set__Container_k__BackingField(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__Container_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__Container_k__BackingField() const;

/// @brief Method get_Container addr 0x2ef5138 size 0x8 virtual false final false
inline ::Zenject::DiContainer* get_Container() ;

/// @brief Method set_Container addr 0x2ef5140 size 0x8 virtual false final false
inline void set_Container(::Zenject::DiContainer*  value) ;

/// @brief Method get_IsEnabled addr 0x2ef5148 size 0x8 virtual true final false
inline bool get_IsEnabled() ;

/// @brief Method Start addr 0x2ef5150 size 0x4 virtual true final false
inline void Start() ;

/// @brief Method InstallBindings addr 0x2ef5154 size 0x40 virtual true final false
inline void InstallBindings() ;

static inline ::Zenject::MonoInstallerBase* New_ctor() ;

/// @brief Method .ctor addr 0x2ef4fb8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method __zenPropertySetter0 addr 0x2ef5194 size 0xd0 virtual false final false
static inline void __zenPropertySetter0(::System::Object*  P_0, ::System::Object*  P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ef5264 size 0x2b0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstallerBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoInstallerBase(MonoInstallerBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstallerBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoInstallerBase(MonoInstallerBase const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoInstallerBase()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::MonoInstallerBase, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::MonoInstallerBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MonoInstallerBase*, "Zenject", "MonoInstallerBase");
