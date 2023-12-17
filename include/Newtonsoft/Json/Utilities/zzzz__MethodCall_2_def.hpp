#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodCall_2)
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
template<typename T,typename TResult>
class MethodCall_2;
}
namespace Newtonsoft::Json::Utilities {
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TResult>
class MethodCall_2<T,TResult>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Utilities::MethodCall_2);
// Type: Newtonsoft.Json.Utilities::MethodCall`2
// Type: Newtonsoft.Json.Utilities::MethodCall`2
namespace Newtonsoft::Json::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T,::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11860)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11860), inst: 81 })
// CS Name: ::Newtonsoft.Json.Utilities::MethodCall`2<T,TResult>*
class CORDL_TYPE MethodCall_2<T,TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Newtonsoft::Json::Utilities::MethodCall_2<T,TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult Invoke(T  target, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(T  target, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline TResult EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodCall_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodCall_2(MethodCall_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodCall_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodCall_2(MethodCall_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodCall_2()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::MethodCall_2, "Newtonsoft.Json.Utilities", "MethodCall`2");
