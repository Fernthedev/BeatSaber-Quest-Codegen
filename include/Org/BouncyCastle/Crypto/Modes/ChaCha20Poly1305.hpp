// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Modes.IAeadCipher
#include "Org/BouncyCastle/Crypto/Modes/IAeadCipher.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
  // Forward declaring type: IMac
  class IMac;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: ChaCha7539Engine
  class ChaCha7539Engine;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Skipping declaration: State because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305
  // [TokenAttribute] Offset: FFFFFFFF
  class ChaCha20Poly1305 : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Modes::IAeadCipher*/ {
    public:
    // Nested type: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State
    // [TokenAttribute] Offset: FFFFFFFF
    struct State/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: State
      constexpr State(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State Uninitialized
      static constexpr const int Uninitialized = 0;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State Uninitialized
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_Uninitialized();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State Uninitialized
      static void _set_Uninitialized(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncInit
      static constexpr const int EncInit = 1;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncInit
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_EncInit();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncInit
      static void _set_EncInit(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncAad
      static constexpr const int EncAad = 2;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncAad
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_EncAad();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncAad
      static void _set_EncAad(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncData
      static constexpr const int EncData = 3;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncData
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_EncData();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncData
      static void _set_EncData(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncFinal
      static constexpr const int EncFinal = 4;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncFinal
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_EncFinal();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State EncFinal
      static void _set_EncFinal(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecInit
      static constexpr const int DecInit = 5;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecInit
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_DecInit();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecInit
      static void _set_DecInit(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecAad
      static constexpr const int DecAad = 6;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecAad
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_DecAad();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecAad
      static void _set_DecAad(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecData
      static constexpr const int DecData = 7;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecData
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_DecData();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecData
      static void _set_DecData(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // static field const value: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecFinal
      static constexpr const int DecFinal = 8;
      // Get static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecFinal
      static Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State _get_DecFinal();
      // Set static field: static public Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State DecFinal
      static void _set_DecFinal(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State
    #pragma pack(pop)
    static check_size<sizeof(ChaCha20Poly1305::State), 0 + sizeof(int)> __Org_BouncyCastle_Crypto_Modes_ChaCha20Poly1305_StateSizeCheck;
    static_assert(sizeof(ChaCha20Poly1305::State) == 0x4);
    // private readonly Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine mChacha20
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* mChacha20;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IMac mPoly1305
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IMac* mPoly1305;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IMac*) == 0x8);
    // private readonly System.Byte[] mKey
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* mKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] mNonce
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* mNonce;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] mBuf
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* mBuf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Byte[] mMac
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* mMac;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] mInitialAad
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* mInitialAad;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.UInt64 mAadCount
    // Size: 0x8
    // Offset: 0x48
    uint64_t mAadCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 mDataCount
    // Size: 0x8
    // Offset: 0x50
    uint64_t mDataCount;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State mState
    // Size: 0x4
    // Offset: 0x58
    Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State mState;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State) == 0x4);
    // private System.Int32 mBufPos
    // Size: 0x4
    // Offset: 0x5C
    int mBufPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ChaCha20Poly1305
    ChaCha20Poly1305(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* mChacha20_ = {}, Org::BouncyCastle::Crypto::IMac* mPoly1305_ = {}, ::Array<uint8_t>* mKey_ = {}, ::Array<uint8_t>* mNonce_ = {}, ::Array<uint8_t>* mBuf_ = {}, ::Array<uint8_t>* mMac_ = {}, ::Array<uint8_t>* mInitialAad_ = {}, uint64_t mAadCount_ = {}, uint64_t mDataCount_ = {}, Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State mState_ = {}, int mBufPos_ = {}) noexcept : mChacha20{mChacha20_}, mPoly1305{mPoly1305_}, mKey{mKey_}, mNonce{mNonce_}, mBuf{mBuf_}, mMac{mMac_}, mInitialAad{mInitialAad_}, mAadCount{mAadCount_}, mDataCount{mDataCount_}, mState{mState_}, mBufPos{mBufPos_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::IAeadCipher
    operator Org::BouncyCastle::Crypto::Modes::IAeadCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[] Zeroes
    static ::Array<uint8_t>* _get_Zeroes();
    // Set static field: static private readonly System.Byte[] Zeroes
    static void _set_Zeroes(::Array<uint8_t>* value);
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine mChacha20
    Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*& dyn_mChacha20();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IMac mPoly1305
    Org::BouncyCastle::Crypto::IMac*& dyn_mPoly1305();
    // Get instance field reference: private readonly System.Byte[] mKey
    ::Array<uint8_t>*& dyn_mKey();
    // Get instance field reference: private readonly System.Byte[] mNonce
    ::Array<uint8_t>*& dyn_mNonce();
    // Get instance field reference: private readonly System.Byte[] mBuf
    ::Array<uint8_t>*& dyn_mBuf();
    // Get instance field reference: private readonly System.Byte[] mMac
    ::Array<uint8_t>*& dyn_mMac();
    // Get instance field reference: private System.Byte[] mInitialAad
    ::Array<uint8_t>*& dyn_mInitialAad();
    // Get instance field reference: private System.UInt64 mAadCount
    uint64_t& dyn_mAadCount();
    // Get instance field reference: private System.UInt64 mDataCount
    uint64_t& dyn_mDataCount();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State mState
    Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State& dyn_mState();
    // Get instance field reference: private System.Int32 mBufPos
    int& dyn_mBufPos();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IMac poly1305)
    // Offset: 0x191D9D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChaCha20Poly1305* New_ctor(Org::BouncyCastle::Crypto::IMac* poly1305) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChaCha20Poly1305*, creationType>(poly1305)));
    }
    // static private System.Void .cctor()
    // Offset: 0x191F528
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x191DB84
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetOutputSize(System.Int32 len)
    // Offset: 0x191E104
    int GetOutputSize(int len);
    // public System.Int32 GetUpdateOutputSize(System.Int32 len)
    // Offset: 0x191E208
    int GetUpdateOutputSize(int len);
    // public System.Void ProcessAadBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len)
    // Offset: 0x191E310
    void ProcessAadBytes(::Array<uint8_t>* inBytes, int inOff, int len);
    // public System.Int32 ProcessBytes(System.Byte[] inBytes, System.Int32 inOff, System.Int32 len, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x191E654
    int ProcessBytes(::Array<uint8_t>* inBytes, int inOff, int len, ::Array<uint8_t>* outBytes, int outOff);
    // public System.Int32 DoFinal(System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x191ECFC
    int DoFinal(::Array<uint8_t>* outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x191F244
    void Reset();
    // private System.Void CheckAad()
    // Offset: 0x191E4E4
    void CheckAad();
    // private System.Void CheckData()
    // Offset: 0x191EB48
    void CheckData();
    // private System.Void FinishAad(Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State nextState)
    // Offset: 0x191F250
    void FinishAad(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State nextState);
    // private System.Void FinishData(Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/Org.BouncyCastle.Crypto.Modes.State nextState)
    // Offset: 0x191F0A0
    void FinishData(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State nextState);
    // private System.UInt64 IncrementCount(System.UInt64 count, System.UInt32 increment, System.UInt64 limit)
    // Offset: 0x191E5B4
    uint64_t IncrementCount(uint64_t count, uint increment, uint64_t limit);
    // private System.Void InitMac()
    // Offset: 0x191F398
    void InitMac();
    // private System.Void PadMac(System.UInt64 count)
    // Offset: 0x191F280
    void PadMac(uint64_t count);
    // private System.Void ProcessData(System.Byte[] inBytes, System.Int32 inOff, System.Int32 inLen, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x191EC30
    void ProcessData(::Array<uint8_t>* inBytes, int inOff, int inLen, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Void Reset(System.Boolean clearMac, System.Boolean resetCipher)
    // Offset: 0x191DFA0
    void Reset(bool clearMac, bool resetCipher);
    // public System.Void .ctor()
    // Offset: 0x191D974
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChaCha20Poly1305* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChaCha20Poly1305*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305
  #pragma pack(pop)
  static check_size<sizeof(ChaCha20Poly1305), 92 + sizeof(int)> __Org_BouncyCastle_Crypto_Modes_ChaCha20Poly1305SizeCheck;
  static_assert(sizeof(ChaCha20Poly1305) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*, "Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305");
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State, "Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305/State");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetOutputSize
// Il2CppName: GetOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(int)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetOutputSize)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "GetOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetUpdateOutputSize
// Il2CppName: GetUpdateOutputSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(int)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::GetUpdateOutputSize)> {
  static const MethodInfo* get() {
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "GetUpdateOutputSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadBytes
// Il2CppName: ProcessAadBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::Array<uint8_t>*, int, int)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessAadBytes)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "ProcessAadBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, len});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessBytes
// Il2CppName: ProcessBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessBytes)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "ProcessBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, len, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::DoFinal
// Il2CppName: DoFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::DoFinal)> {
  static const MethodInfo* get() {
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "DoFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckAad
// Il2CppName: CheckAad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckAad)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "CheckAad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckData
// Il2CppName: CheckData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::CheckData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "CheckData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishAad
// Il2CppName: FinishAad
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishAad)> {
  static const MethodInfo* get() {
    static auto* nextState = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "FinishAad", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nextState});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishData
// Il2CppName: FinishData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::State)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::FinishData)> {
  static const MethodInfo* get() {
    static auto* nextState = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305/State")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "FinishData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nextState});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::IncrementCount
// Il2CppName: IncrementCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(uint64_t, uint, uint64_t)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::IncrementCount)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* increment = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* limit = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "IncrementCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count, increment, limit});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::InitMac
// Il2CppName: InitMac
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)()>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::InitMac)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "InitMac", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::PadMac
// Il2CppName: PadMac
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(uint64_t)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::PadMac)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "PadMac", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessData
// Il2CppName: ProcessData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(::Array<uint8_t>*, int, int, ::Array<uint8_t>*, int)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::ProcessData)> {
  static const MethodInfo* get() {
    static auto* inBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "ProcessData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBytes, inOff, inLen, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::*)(bool, bool)>(&Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::Reset)> {
  static const MethodInfo* get() {
    static auto* clearMac = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* resetCipher = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clearMac, resetCipher});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
