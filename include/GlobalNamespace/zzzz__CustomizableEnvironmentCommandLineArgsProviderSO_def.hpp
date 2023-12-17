#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomizableEnvironmentCommandLineArgsProviderSO)
namespace GlobalNamespace {
class EnvironmentCommandLineArgsProvider;
}
namespace GlobalNamespace {
class ICommandLineArgsProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomizableEnvironmentCommandLineArgsProviderSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO);
// Type: ::CustomizableEnvironmentCommandLineArgsProviderSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5952))
// CS Name: ::CustomizableEnvironmentCommandLineArgsProviderSO*
class CORDL_TYPE CustomizableEnvironmentCommandLineArgsProviderSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::PersistentScriptableObject)]{};

/// @brief Field _useCustomCommandLineArgs offset 0x18
 __declspec(property(get=__get__useCustomCommandLineArgs, put=__set__useCustomCommandLineArgs)) bool  _useCustomCommandLineArgs;

/// @brief Field _useEnvironmentCommandLineArgs offset 0x19
 __declspec(property(get=__get__useEnvironmentCommandLineArgs, put=__set__useEnvironmentCommandLineArgs)) bool  _useEnvironmentCommandLineArgs;

/// @brief Field _customCommandLineArgs offset 0x20
 __declspec(property(get=__get__customCommandLineArgs, put=__set__customCommandLineArgs)) ::StringW  _customCommandLineArgs;

/// @brief Convert operator to "::GlobalNamespace::ICommandLineArgsProvider"
constexpr operator  ::GlobalNamespace::ICommandLineArgsProvider*() noexcept;

constexpr void __set__useCustomCommandLineArgs(bool  value) ;

constexpr bool& __get__useCustomCommandLineArgs() ;

constexpr bool const& __get__useCustomCommandLineArgs() const;

constexpr void __set__useEnvironmentCommandLineArgs(bool  value) ;

constexpr bool& __get__useEnvironmentCommandLineArgs() ;

constexpr bool const& __get__useEnvironmentCommandLineArgs() const;

constexpr void __set__customCommandLineArgs(::StringW  value) ;

constexpr ::StringW& __get__customCommandLineArgs() ;

constexpr ::StringW const& __get__customCommandLineArgs() const;

static inline void setStaticF__environmentCommandLineArgsProvider(::GlobalNamespace::EnvironmentCommandLineArgsProvider*  value) ;

static inline ::GlobalNamespace::EnvironmentCommandLineArgsProvider* getStaticF__environmentCommandLineArgsProvider() ;

/// @brief Method GetCommandLineArgs addr 0x2304f68 size 0x174 virtual true final true
inline ::ArrayW<::StringW,::Array<::StringW>*> GetCommandLineArgs() ;

static inline ::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO* New_ctor() ;

/// @brief Method .ctor addr 0x23050e4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CustomizableEnvironmentCommandLineArgsProviderSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomizableEnvironmentCommandLineArgsProviderSO(CustomizableEnvironmentCommandLineArgsProviderSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomizableEnvironmentCommandLineArgsProviderSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomizableEnvironmentCommandLineArgsProviderSO(CustomizableEnvironmentCommandLineArgsProviderSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CustomizableEnvironmentCommandLineArgsProviderSO()  = default;
public:


// Fields

// Static field _environmentCommandLineArgsProvider


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*, "", "CustomizableEnvironmentCommandLineArgsProviderSO");
