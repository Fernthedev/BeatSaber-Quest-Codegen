#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StandalonePlatform)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
class __StandalonePlatform__UnityLogDelegate;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace Oculus::Platform {
class StandalonePlatform;
}
namespace Oculus::Platform {
class __StandalonePlatform__UnityLogDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::StandalonePlatform);
MARK_REF_PTR_T(::Oculus::Platform::__StandalonePlatform__UnityLogDelegate);
// Type: ::UnityLogDelegate
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13388))
// CS Name: ::StandalonePlatform::UnityLogDelegate*
class CORDL_TYPE __StandalonePlatform__UnityLogDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2700f84 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2701048 size 0x14 virtual true final false
inline void Invoke(::cordl_internals::intptr_t  tag, ::cordl_internals::intptr_t  msg) ;

/// @brief Method BeginInvoke addr 0x270105c size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::cordl_internals::intptr_t  tag, ::cordl_internals::intptr_t  msg, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27010f4 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__StandalonePlatform__UnityLogDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StandalonePlatform__UnityLogDelegate(__StandalonePlatform__UnityLogDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StandalonePlatform__UnityLogDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StandalonePlatform__UnityLogDelegate(__StandalonePlatform__UnityLogDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StandalonePlatform__UnityLogDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate, 0x80>, "Size mismatch!");

} // namespace end def Oculus::Platform
// Type: Oculus.Platform::StandalonePlatform
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13389))
// CS Name: ::Oculus.Platform::StandalonePlatform*
class CORDL_TYPE StandalonePlatform : public ::System::Object {
public:
// Declarations
using UnityLogDelegate = ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method InitializeInEditor addr 0x26f4fec size 0x128 virtual false final false
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* InitializeInEditor() ;

/// @brief Method AsyncInitialize addr 0x270064c size 0xe4 virtual false final false
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(uint64_t  appID, ::StringW  accessToken) ;

/// @brief Method AsyncInitializeWithAccessTokenAndOptions addr 0x26f54b0 size 0x148 virtual false final false
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitializeWithAccessTokenAndOptions(::StringW  appId, ::StringW  accessToken, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions,bool>*  initConfigOptions) ;

static inline ::Oculus::Platform::StandalonePlatform* New_ctor() ;

/// @brief Method .ctor addr 0x26f4fe4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StandalonePlatform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandalonePlatform(StandalonePlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandalonePlatform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandalonePlatform(StandalonePlatform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StandalonePlatform()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::StandalonePlatform, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::StandalonePlatform);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::StandalonePlatform*, "Oculus.Platform", "StandalonePlatform");
NEED_NO_BOX(::Oculus::Platform::__StandalonePlatform__UnityLogDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*, "Oculus.Platform", "StandalonePlatform/UnityLogDelegate");
