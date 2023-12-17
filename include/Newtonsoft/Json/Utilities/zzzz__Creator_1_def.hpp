#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Creator_1)
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
namespace Newtonsoft::Json::Utilities {
template<typename T>
class Creator_1;
}
namespace Newtonsoft::Json::Utilities {
template<::il2cpp_utils::il2cpp_reference_type T>
class Creator_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::Creator_1);
// Type: Newtonsoft.Json.Utilities::Creator`1
// Type: Newtonsoft.Json.Utilities::Creator`1
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(11893))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11893), inst: 2 })
// CS Name: ::Newtonsoft.Json.Utilities::Creator`1<T>*
class CORDL_TYPE Creator_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Newtonsoft::Json::Utilities::Creator_1<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline T Invoke() ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline T EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "Creator_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Creator_1(Creator_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Creator_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Creator_1(Creator_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Creator_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::Creator_1, "Newtonsoft.Json.Utilities", "Creator`1");
