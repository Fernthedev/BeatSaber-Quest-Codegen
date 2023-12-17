#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(StaticPacketPoolProvider)
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System {
class Type;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace GlobalNamespace {
class IPacketPool;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticPacketPoolProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticPacketPoolProvider);
// Type: ::StaticPacketPoolProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12810))
// CS Name: ::StaticPacketPoolProvider*
class CORDL_TYPE StaticPacketPoolProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__staticPools(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::GlobalNamespace::IPacketPool*>*  value) ;

static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::GlobalNamespace::IPacketPool*>* getStaticF__staticPools() ;

/// @brief Method GetPacketPool addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline ::GlobalNamespace::PacketPool_1<T>* GetPacketPool() ;

/// @brief Method TryGetPacketPool addr 0xe3f4dc size 0x90 virtual false final false
static inline bool TryGetPacketPool(::System::Type*  t, ByRef<::GlobalNamespace::IPacketPool*>  pool) ;

// Ctor Parameters [CppParam { name: "", ty: "StaticPacketPoolProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticPacketPoolProvider(StaticPacketPoolProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticPacketPoolProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticPacketPoolProvider(StaticPacketPoolProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticPacketPoolProvider()  = default;
public:


// Fields

// Static field _staticPools


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticPacketPoolProvider, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticPacketPoolProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticPacketPoolProvider*, "", "StaticPacketPoolProvider");
