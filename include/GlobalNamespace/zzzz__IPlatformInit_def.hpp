#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlatformInit)
namespace Zenject {
class IInitializable;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IPlatformInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPlatformInit);
// Type: ::IPlatformInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15980))
// CS Name: ::IPlatformInit*
class CORDL_TYPE IPlatformInit {
public:
// Declarations
 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

/// @brief Convert operator to "::Zenject::IInitializable"
constexpr operator  ::Zenject::IInitializable*() noexcept;

/// @brief Method get_IsInitialized addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool get_IsInitialized() ;

/// @brief Method InitializeAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<bool>* InitializeAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IPlatformInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IPlatformInit(IPlatformInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPlatformInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlatformInit(IPlatformInit const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPlatformInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPlatformInit*, "", "IPlatformInit");
