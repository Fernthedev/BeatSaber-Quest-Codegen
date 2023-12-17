#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtensionDataGetter)
namespace System {
class AsyncCallback;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ExtensionDataGetter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ExtensionDataGetter);
// Type: Newtonsoft.Json.Serialization::ExtensionDataGetter
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11940))
// CS Name: ::Newtonsoft.Json.Serialization::ExtensionDataGetter*
class CORDL_TYPE ExtensionDataGetter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Newtonsoft::Json::Serialization::ExtensionDataGetter* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x26714c4 size 0x12c virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x26784cc size 0x14 virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Object*,::System::Object*>>* Invoke(::System::Object*  o) ;

/// @brief Method BeginInvoke addr 0x26784e0 size 0x20 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  o, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x2678500 size 0xc virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Object*,::System::Object*>>* EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionDataGetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtensionDataGetter(ExtensionDataGetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtensionDataGetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtensionDataGetter(ExtensionDataGetter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExtensionDataGetter()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ExtensionDataGetter, 0x80>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ExtensionDataGetter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ExtensionDataGetter*, "Newtonsoft.Json.Serialization", "ExtensionDataGetter");
