#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeUpdateCallback)
namespace UnityEngineInternal::Input {
struct NativeInputEventBuffer;
}
namespace System {
class Object;
}
namespace UnityEngineInternal::Input {
struct NativeInputUpdateType;
}
// Forward declare root types
namespace UnityEngineInternal::Input {
class NativeUpdateCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngineInternal::Input::NativeUpdateCallback);
// Type: UnityEngineInternal.Input::NativeUpdateCallback
namespace UnityEngineInternal::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16107))
// CS Name: ::UnityEngineInternal.Input::NativeUpdateCallback*
class CORDL_TYPE NativeUpdateCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngineInternal::Input::NativeUpdateCallback* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2d0fc80 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2d0fd44 size 0x14 virtual true final false
inline void Invoke(::UnityEngineInternal::Input::NativeInputUpdateType  updateType, ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer>  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "NativeUpdateCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeUpdateCallback(NativeUpdateCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeUpdateCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeUpdateCallback(NativeUpdateCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeUpdateCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::Input::NativeUpdateCallback, 0x80>, "Size mismatch!");

} // namespace end def UnityEngineInternal::Input
NEED_NO_BOX(::UnityEngineInternal::Input::NativeUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeUpdateCallback*, "UnityEngineInternal.Input", "NativeUpdateCallback");
