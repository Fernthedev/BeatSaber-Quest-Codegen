#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataCallback_1)
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class BeatmapDataCallback_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class BeatmapDataCallback_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapDataCallback_1);
// Type: ::BeatmapDataCallback`1
// Type: ::BeatmapDataCallback`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(4710))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4710), inst: 2 })
// CS Name: ::BeatmapDataCallback`1<T>*
class CORDL_TYPE BeatmapDataCallback_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::BeatmapDataCallback_1<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(T  data) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(T  data, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallback_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataCallback_1(BeatmapDataCallback_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallback_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataCallback_1(BeatmapDataCallback_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataCallback_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapDataCallback_1, "", "BeatmapDataCallback`1");
