#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(LocalizationProvider)
namespace Polyglot {
class Localization;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizationProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalizationProvider);
// Type: ::LocalizationProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15545))
// CS Name: ::LocalizationProvider*
class CORDL_TYPE LocalizationProvider : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field _localization offset 0x18
 __declspec(property(get=__get__localization, put=__set__localization)) ::Polyglot::Localization*  _localization;

 __declspec(property(get=get_localization)) ::Polyglot::Localization*  localization;

constexpr void __set__localization(::Polyglot::Localization*  value) ;

constexpr ::Polyglot::Localization* __get__localization() ;

constexpr ::cordl_internals::to_const_pointer<::Polyglot::Localization*> __get__localization() const;

static inline void setStaticF__instance(::GlobalNamespace::LocalizationProvider*  value) ;

static inline ::GlobalNamespace::LocalizationProvider* getStaticF__instance() ;

/// @brief Method get_localization addr 0x28008ac size 0x8 virtual false final false
inline ::Polyglot::Localization* get_localization() ;

/// @brief Method get_Instance addr 0x28008b4 size 0x94 virtual false final false
static inline ::GlobalNamespace::LocalizationProvider* get_Instance() ;

/// @brief Method set_Instance addr 0x2800a30 size 0x4c virtual false final false
static inline void set_Instance(::GlobalNamespace::LocalizationProvider*  value) ;

/// @brief Method get_HasInstance addr 0x2800948 size 0xe8 virtual false final false
static inline bool get_HasInstance() ;

static inline ::GlobalNamespace::LocalizationProvider* New_ctor() ;

/// @brief Method .ctor addr 0x2800a7c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationProvider(LocalizationProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationProvider(LocalizationProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalizationProvider()  = default;
public:


// Fields

// Static field _instance


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalizationProvider, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalizationProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizationProvider*, "", "LocalizationProvider");
