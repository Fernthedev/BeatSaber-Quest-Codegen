#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataCallbackWrapper_1)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
template<typename T>
class BeatmapDataCallback_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class BeatmapDataCallbackWrapper_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class BeatmapDataCallbackWrapper_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::BeatmapDataCallbackWrapper_1);
// Type: ::BeatmapDataCallbackWrapper`1
// Type: ::BeatmapDataCallbackWrapper`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4712)), TypeDefinitionIndex(TypeDefinitionIndex(4711))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4712), inst: 2 })
// CS Name: ::BeatmapDataCallbackWrapper`1<T>*
class CORDL_TYPE BeatmapDataCallbackWrapper_1<T> : public ::GlobalNamespace::BeatmapDataCallbackWrapper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper)]{};

/// @brief Field _callback offset 0x28
 __declspec(property(get=__get__callback, put=__set__callback)) ::GlobalNamespace::BeatmapDataCallback_1<T>*  _callback;

constexpr void __set__callback(::GlobalNamespace::BeatmapDataCallback_1<T>*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallback_1<T>* __get__callback() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallback_1<T>*> __get__callback() const;

static inline ::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>* New_ctor(::GlobalNamespace::BeatmapDataCallback_1<T>*  callback, float_t  aheadTime, ::ArrayW<int32_t,::Array<int32_t>*>  beatmapEventSubtypeIdentifiers) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::BeatmapDataCallback_1<T>*  callback, float_t  aheadTime, ::ArrayW<int32_t,::Array<int32_t>*>  beatmapEventSubtypeIdentifiers) ;

/// @brief Method CallCallback addr 0x0 size 0xffffffffffffffff virtual true final false
inline void CallCallback(::GlobalNamespace::BeatmapDataItem*  beatmapData) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataCallbackWrapper_1(BeatmapDataCallbackWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataCallbackWrapper_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataCallbackWrapper_1(BeatmapDataCallbackWrapper_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataCallbackWrapper_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::BeatmapDataCallbackWrapper_1, "", "BeatmapDataCallbackWrapper`1");
