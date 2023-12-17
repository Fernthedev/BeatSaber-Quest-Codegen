#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AndroidSupport)
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidSupport;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidSupport);
// Type: UnityEngine.InputSystem.Android::AndroidSupport
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6444))
// CS Name: ::UnityEngine.InputSystem.Android::AndroidSupport*
class CORDL_TYPE AndroidSupport : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kAndroidInterface offset 0x0
static constexpr ::ConstString  kAndroidInterface{u"Android"};

/// @brief Method Initialize addr 0x2ae5a28 size 0x8f4 virtual false final false
static inline void Initialize() ;

/// @brief Method OnFindLayoutForDevice addr 0x2ae631c size 0x254 virtual false final false
static inline ::StringW OnFindLayoutForDevice(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>  description, ::StringW  matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  executeCommandDelegate) ;

static inline ::UnityEngine::InputSystem::Android::AndroidSupport* New_ctor() ;

/// @brief Method .ctor addr 0x2ae6630 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AndroidSupport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidSupport(AndroidSupport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidSupport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidSupport(AndroidSupport const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AndroidSupport()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidSupport, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidSupport*, "UnityEngine.InputSystem.Android", "AndroidSupport");
