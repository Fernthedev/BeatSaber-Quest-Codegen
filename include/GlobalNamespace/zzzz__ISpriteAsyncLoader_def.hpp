#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISpriteAsyncLoader)
namespace UnityEngine {
class Sprite;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ISpriteAsyncLoader;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISpriteAsyncLoader);
// Type: ::ISpriteAsyncLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5898))
// CS Name: ::ISpriteAsyncLoader*
class CORDL_TYPE ISpriteAsyncLoader {
public:
// Declarations
/// @brief Method LoadSpriteAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* LoadSpriteAsync(::StringW  path, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters [CppParam { name: "", ty: "ISpriteAsyncLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISpriteAsyncLoader(ISpriteAsyncLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISpriteAsyncLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISpriteAsyncLoader(ISpriteAsyncLoader const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISpriteAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISpriteAsyncLoader*, "", "ISpriteAsyncLoader");
