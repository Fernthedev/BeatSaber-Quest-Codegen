#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtensionDataSetter)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ExtensionDataSetter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ExtensionDataSetter);
// Type: Newtonsoft.Json.Serialization::ExtensionDataSetter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11939))
// CS Name: ::Newtonsoft.Json.Serialization::ExtensionDataSetter*
class CORDL_TYPE ExtensionDataSetter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Newtonsoft::Json::Serialization::ExtensionDataSetter* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x267138c size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x2678480 size 0x14 virtual true final false
inline void Invoke(::System::Object*  o, ::StringW  key, ::System::Object*  value) ;

/// @brief Method BeginInvoke addr 0x2678494 size 0x2c virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  o, ::StringW  key, ::System::Object*  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x26784c0 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionDataSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtensionDataSetter(ExtensionDataSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionDataSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtensionDataSetter(ExtensionDataSetter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExtensionDataSetter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ExtensionDataSetter, 0x80>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ExtensionDataSetter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ExtensionDataSetter*, "Newtonsoft.Json.Serialization", "ExtensionDataSetter");
