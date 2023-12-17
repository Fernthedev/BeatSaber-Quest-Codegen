#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PacketPool_1)
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentBag_1;
}
namespace GlobalNamespace {
template<typename T>
class IPacketPool_1;
}
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace GlobalNamespace {
class IPacketPool;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class PacketPool_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::PacketPool_1);
// Type: ::PacketPool`1
// Type: ::PacketPool`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12809)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12809), inst: 2 })
// CS Name: ::PacketPool`1<T>*
class CORDL_TYPE PacketPool_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field kMaxPoolSize offset 0x0
static constexpr int32_t  kMaxPoolSize{static_cast<int32_t>(0x10)};

/// @brief Field _bag offset 0x10
 __declspec(property(get=__get__bag, put=__set__bag)) ::System::Collections::Concurrent::ConcurrentBag_1<T>*  _bag;

/// @brief Convert operator to "::GlobalNamespace::IPacketPool_1<T>"
constexpr operator  ::GlobalNamespace::IPacketPool_1<T>*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IPacketPool"
constexpr operator  ::GlobalNamespace::IPacketPool*() noexcept;

constexpr void __set__bag(::System::Collections::Concurrent::ConcurrentBag_1<T>*  value) ;

constexpr ::System::Collections::Concurrent::ConcurrentBag_1<T>* __get__bag() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentBag_1<T>*> __get__bag() const;

/// @brief Method Obtain addr 0x0 size 0xffffffffffffffff virtual true final true
inline T Obtain() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Release(T  t) ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Fill() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Clear() ;

/// @brief Method IPacketPool.Release addr 0x0 size 0xffffffffffffffff virtual true final true
inline void IPacketPool_Release(::GlobalNamespace::IPoolablePacket*  o) ;

static inline ::GlobalNamespace::PacketPool_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PacketPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PacketPool_1(PacketPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PacketPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PacketPool_1(PacketPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PacketPool_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::PacketPool_1, "", "PacketPool`1");
