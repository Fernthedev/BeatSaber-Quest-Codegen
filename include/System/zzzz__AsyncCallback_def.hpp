#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncCallback)
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class AsyncCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::AsyncCallback);
// Type: System::AsyncCallback
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2353))
// CS Name: ::System::AsyncCallback*
class CORDL_TYPE AsyncCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::AsyncCallback* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2521310 size 0x12c virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x252143c size 0x14 virtual true final false
inline void Invoke(::System::IAsyncResult*  ar) ;

/// @brief Method BeginInvoke addr 0x2521450 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::IAsyncResult*  ar, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x2521470 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCallback(AsyncCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCallback(AsyncCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AsyncCallback, 0x80>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::AsyncCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::AsyncCallback*, "System", "AsyncCallback");
